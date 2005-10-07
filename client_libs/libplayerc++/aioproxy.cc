/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2000-2003
 *     Brian Gerkey, Kasper Stoy, Richard Vaughan, & Andrew Howard
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */


/*
 * $Id$
 */


#include "playerc++.h"

using namespace PlayerCc;

AIOProxy::AIOProxy(PlayerClient *aPc, uint aIndex)
  : ClientProxy(aPc, aIndex),
  mDevice(NULL)
{
  Subscribe(aIndex);
  // how can I get this into the clientproxy.cc?
  // right now, we're dependent on knowing its device type
  mInfo = &(mDevice->info);
}

AIOProxy::~AIOProxy()
{
  Unsubscribe();
}

void
AIOProxy::Subscribe(uint aIndex)
{
  mDevice = playerc_aio_create(mClient, aIndex);
  if (NULL==mDevice)
    throw PlayerError("LaserProxy::LaserProxy()", "could not create");

  if (0 != playerc_aio_subscribe(mDevice, PLAYER_OPEN_MODE))
    throw PlayerError("LaserProxy::LaserProxy()", "could not subscribe");
}

void
AIOProxy::Unsubscribe()
{
  assert(NULL!=mDevice);
  playerc_aio_unsubscribe(mDevice);
  playerc_aio_destroy(mDevice);
  mDevice = NULL;
}



std::ostream& std::operator << (std::ostream &os, const PlayerCc::AIOProxy &c)
{
  os << "#AIO (" << c.GetInterface() << ":" << c.GetIndex() << ")" << std::endl;
  os << c.GetCount() << std::endl;
  if (c.GetCount()<0)
  {
  os << "WARNING: AIOProxy received a negative count value.\n" << std::endl;
  }
  else
  {
    for (unsigned int i=0;i < c.GetCount();i++)
    {
      os << "AIO" << i << " - " << c.GetAnin(i) << std::endl;
    }
  }

  return os;
}
