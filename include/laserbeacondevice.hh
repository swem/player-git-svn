/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2000  Brian Gerkey   &  Kasper Stoy
 *                      gerkey@usc.edu    kaspers@robotics.usc.edu
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

///////////////////////////////////////////////////////////////////////////
//
// File: laserbeacondevice.h
// Author: Andrew Howard
// Date: 29 Jan 2000
// Desc: Looks for beacons in laser data
//
// CVS info:
//  $Source$
//  $Author$
//  $Revision$
//
// Usage:
//  (empty)
//
// Theory of operation:
//  (empty)
//
// Known bugs:
//  (empty)
//
// Possible enhancements:
//  (empty)
//
///////////////////////////////////////////////////////////////////////////

#ifndef LASERBEACONDEVICE
#define LASERBEACONDEVICE

#include <pthread.h>
#include <unistd.h>

#include "lock.h"
#include "device.h"


// *** HACK BEGIN -- remove this in new version
//
/* make sure we get the various types like 'uint8_t' */
#ifdef PLAYER_SOLARIS
  #include <sys/types.h>   // solaris puts them here
#else
  #include <stdint.h>      // linux puts them here
#endif

#define PLAYER_NUM_LASER_SAMPLES 361

/*
 * the laser data packet
 */
typedef struct
{
  /* laser samples start at 0 on the right and increase counterclockwise
     (like the unit circle) */
  uint16_t ranges[PLAYER_NUM_LASER_SAMPLES];
} __attribute__ ((packed)) player_laser_data_t;

// *** HACK END

// The laser beacon device class
//
class CLaserBeaconDevice : public CDevice
{
    // Constructor
    //
    public: CLaserBeaconDevice(CDevice *laser);

    // Setup/shutdown routines
    //
    public: virtual int Setup();
    public: virtual int Shutdown();
    public: virtual CLock* GetLock() {return &lock;};

    // Client interface
    //
    public: virtual size_t GetData(unsigned char *, size_t maxsize);
    public: virtual void PutData(unsigned char *, size_t maxsize);
    public: virtual void GetCommand(unsigned char *, size_t maxsize);
    public: virtual void PutCommand(unsigned char *, size_t maxsize);
    public: virtual size_t GetConfig(unsigned char *, size_t maxsize);
    public: virtual void PutConfig(unsigned char *, size_t maxsize);

    // Analyze the laser data and return beacon data
    //
    private: void FindBeacons(const player_laser_data_t *laser_data,
                              BeaconData *beacon_data);

    // Analyze the candidate beacon and return its id (0 == none)
    //
    private: int IdentBeacon(int a, int b, double ox, double oy, double oth,
                             const player_laser_data_t *laser_data);

    // Lock object for synchronization
    //
    private: CLock lock;

    // Pointer to laser to get data from
    //
    private: CDevice *m_laser;

    // Magic numbers
    // See constructor for definitions
    //
    private: double m_min_width, m_max_width;
    private: double m_max_depth;
    private: int m_max_bits;
    private: double m_bit_width;
    private: int m_min_samples;
    private: int m_one_thresh, m_zero_thresh;  
};


#endif
