/* 
 *  libplayerc : a Player client library
 *  Copyright (C) Andrew Howard 2002
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
/***************************************************************************
 * Desc: Visual blob finder proxy
 * Author: Andrew Howard
 * Date: 24 May 2002
 * CVS: $Id$
 **************************************************************************/

#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>

#include "playerc.h"
#include "error.h"


// Local declarations
void playerc_blobfinder_putdata(playerc_blobfinder_t *device, player_msghdr_t *header,
                            player_blobfinder_data_t *data, size_t len);

// Create a new blobfinder proxy
playerc_blobfinder_t *playerc_blobfinder_create(playerc_client_t *client, int robot, int index)
{
  playerc_blobfinder_t *device;

  device = malloc(sizeof(playerc_blobfinder_t));
  memset(device, 0, sizeof(playerc_blobfinder_t));
  playerc_device_init(&device->info, client, robot, PLAYER_BLOBFINDER_CODE, index,
                      (playerc_putdata_fn_t) playerc_blobfinder_putdata);
    
  return device;
}


// Destroy a blobfinder proxy
void playerc_blobfinder_destroy(playerc_blobfinder_t *device)
{
  playerc_device_term(&device->info);
  free(device);
}


// Subscribe to the blobfinder device
int playerc_blobfinder_subscribe(playerc_blobfinder_t *device, int access)
{
  return playerc_device_subscribe(&device->info, access);
}


// Un-subscribe from the blobfinder device
int playerc_blobfinder_unsubscribe(playerc_blobfinder_t *device)
{
  return playerc_device_unsubscribe(&device->info);
}


// Process incoming data
void playerc_blobfinder_putdata(playerc_blobfinder_t *device, player_msghdr_t *header,
                           player_blobfinder_data_t *data, size_t len)
{
  int i, ch;
  int offset, count;
  player_blobfinder_blob_elt_t *src;
  playerc_blobfinder_blob_t *dest;

  device->width = ntohs(data->width);
  device->height = ntohs(data->height);
  
  device->blob_count = 0;
  for (ch = 0; ch < PLAYER_BLOBFINDER_MAX_CHANNELS; ch++)
  {
    offset = ntohs(data->header[ch].index);
    count = ntohs(data->header[ch].num);

    for (i = 0; i < count; i++)
    {
      src = data->blobs + i + offset;
      if (device->blob_count >= PLAYERC_BLOBFINDER_MAX_BLOBS)
        break;
      dest = device->blobs + device->blob_count++;

      dest->channel = ch;
      dest->color = ntohl(src->color);
      dest->x = ntohs(src->x);
      dest->y = ntohs(src->y);
      dest->area = ntohl(src->area);
      dest->left = ntohs(src->left);
      dest->right = ntohs(src->right);
      dest->top = ntohs(src->top);
      dest->bottom = ntohs(src->bottom);
    }
  }
}

