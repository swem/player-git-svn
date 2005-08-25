/*
 *  Player - One Hell of a Robot Server
 *  Copyright (C) 2000  
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
#if HAVE_CONFIG_H
  #include <config.h>  // to get the INCLUDE_foo macros
#endif

#include <libplayercore/playercore.h>

/* prototype driver-specific init funcs */
#ifdef INCLUDE_BUMPERSAFE
void BumperSafe_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GARMINNMEA
void GarminNMEA_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MAPFILE
void MapFile_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MAPCSPACE
void MapCspace_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MAPSCALE
void MapScale_Register(DriverTable* table);
#endif

#ifdef INCLUDE_AMTECPOWERCUBE
void AmtecPowerCube_Register(DriverTable* table);
#endif

#ifdef INCLUDE_CLODBUSTER
void ClodBuster_Register(DriverTable* table);
#endif

#ifdef INCLUDE_OBOT
void Obot_Register(DriverTable* table);
#endif

#ifdef INCLUDE_ER1
void ER_Register(DriverTable* table);
#endif

#ifdef INCLUDE_WAVEFRONT
void Wavefront_Register(DriverTable* table);
#endif

#ifdef INCLUDE_SEGWAYRMP
void SegwayRMP_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERPOSEINTERPOLATOR
void LaserPoseInterp_Register(DriverTable* table);
#endif

#ifdef INCLUDE_SICKLMS200
void SickLMS200_Register(DriverTable* table);
#endif
                                                                               
#ifdef INCLUDE_SICKPLS
void SickPLS_Register(DriverTable* table);
#endif

#ifdef INCLUDE_ACTS
void Acts_Register(DriverTable* table);
#endif

#ifdef INCLUDE_CMVISION
void CMVision_Register(DriverTable* table);
#endif


#ifdef INCLUDE_CMUCAM2
void Cmucam2_Register(DriverTable* table);
// REMOVE void Cmucam2blobfinder_Register(DriverTable* table);
// REMOVE void Cmucam2ptz_Register(DriverTable* table);
#endif

#ifdef INCLUDE_UPCBARCODE
void UPCBarcode_Register(DriverTable* table);
#endif

#ifdef INCLUDE_SIMPLESHAPE
void SimpleShape_Register(DriverTable* table);
#endif

#ifdef INCLUDE_FESTIVAL
void Festival_Register(DriverTable* table);
#endif 

#ifdef INCLUDE_SPHINX2
void Sphinx2_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERBAR
void LaserBar_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERBARCODE
void LaserBarcode_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERVISUALBARCODE
void LaserVisualBarcode_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERVISUALBW
void LaserVisualBW_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LASERCSPACE
void LaserCSpace_Register(DriverTable* table);
#endif

#ifdef INCLUDE_SONYEVID30
void SonyEVID30_Register(DriverTable* table);
#endif

#ifdef INCLUDE_PTU46
void PTU46_Register(DriverTable* table);
#endif

#ifdef INCLUDE_CANONVCC4
void canonvcc4_Register(DriverTable* table);
#endif

#ifdef INCLUDE_FLOCKOFBIRDS
void FlockOfBirds_Register(DriverTable* table);
#endif

#ifdef INCLUDE_DUMMY
void Dummy_Register(DriverTable* table);
#endif

#ifdef INCLUDE_PASSTHROUGH
void PassThrough_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LOGFILE
void WriteLog_Register(DriverTable* table);
//void ReadLog_Register(DriverTable* table);
#endif

#ifdef INCLUDE_P2OS
void P2OS_Register(DriverTable* table);
#endif

#ifdef INCLUDE_RFLEX
void RFLEX_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LINUXWIFI
void LinuxWiFi_Register(DriverTable *table);
#endif

#ifdef INCLUDE_AODV
void Aodv_Register(DriverTable *table);
#endif

#ifdef INCLUDE_IWSPY
void Iwspy_Register(DriverTable *table);
#endif

#ifdef INCLUDE_LINUXJOYSTICK
void LinuxJoystick_Register(DriverTable* table);
#endif

#ifdef INCLUDE_REB
void REB_Register(DriverTable *table);
#endif

#ifdef INCLUDE_KHEPERA
void Khepera_Register(DriverTable *table);
#endif

#ifdef INCLUDE_FIXEDTONES
void FixedTones_Register(DriverTable* table);
#endif

#ifdef INCLUDE_ACOUSTICS
void Acoustics_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MIXER
void Mixer_Register(DriverTable* table);
#endif

#ifdef INCLUDE_RWI
void RWIBumper_Register(DriverTable* table);
void RWILaser_Register(DriverTable* table);
void RWIPosition_Register(DriverTable* table);
void RWIPower_Register(DriverTable* table);
void RWISonar_Register(DriverTable* table);
#endif

#ifdef INCLUDE_ISENSE
void InertiaCube2_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MICROSTRAIN
void MicroStrain3DMG_Register(DriverTable* table);
#endif

#ifdef INCLUDE_INAV
void INav_Register(DriverTable *table);
#endif

#ifdef INCLUDE_VFH
void VFH_Register(DriverTable *table);
#endif

#ifdef INCLUDE_WAVEAUDIO
void Waveaudio_Register(DriverTable* table);
#endif

#ifdef INCLUDE_MCL
void RegularMCL_Register(DriverTable* table);
#endif

#ifdef INCLUDE_AMCL
void AdaptiveMCL_Register(DriverTable* table);
#endif

#ifdef INCLUDE_LIFOMCOM
void LifoMCom_Register(DriverTable* table);
#endif

#ifdef INCLUDE_CAMERAV4L
void CameraV4L_Register(DriverTable *table);
#endif

#ifdef INCLUDE_CAMERA1394
void Camera1394_Register(DriverTable *table);
#endif

#ifdef INCLUDE_IMAGESEQ
void ImageSeq_Register(DriverTable* table);
#endif

#ifdef INCLUDE_CAMERACOMPRESS
void CameraCompress_Register(DriverTable* table);
#endif


#ifdef INCLUDE_GAZEBO_SIM
void GzSim_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_CAMERA
void GzCamera_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_FACTORY
void GzFactory_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_FIDUCIAL
void GzFiducial_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_GPS
void GzGps_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_LASER
void GzLaser_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_POSITION
void GzPosition_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_POSITION3D
void GzPosition3d_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_POWER
void GzPower_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_PTZ
void GzPtz_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_TRUTH
void GzTruth_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_GRIPPER
void GzGripper_Register(DriverTable *table);
#endif

// Deprecated; for Gazebo 0.4 compatability
#ifdef INCLUDE_GAZEBO_SONARS
void GzSonars_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_SONAR
void GzSonar_Register(DriverTable *table);
#endif

#ifdef INCLUDE_GAZEBO_STEREO
void GzStereo_Register(DriverTable *table);
#endif


#ifdef INCLUDE_SERVICE_ADV_LSD
void ServiceAdvLSD_Register(DriverTable* table);
#endif

#ifdef INCLUDE_SERVICE_ADV_MDNS
void ServiceAdvMDNS_Register(DriverTable* table);
#endif

#ifdef INCLUDE_FAKELOCALIZE
void FakeLocalize_Register(DriverTable* table);
#endif

#ifdef INCLUDE_STAGECLIENT
void StgSimulation_Register(DriverTable *table);
void StgLaser_Register(DriverTable *table);
void StgPosition_Register(DriverTable *table);
void StgSonar_Register(DriverTable *table);
void StgEnergy_Register(DriverTable *table);
void StgBlobfinder_Register(DriverTable *table);
void StgFiducial_Register(DriverTable *table);
//void StgBlinkenlight_Register(DriverTable *table);
#endif

#ifdef INCLUDE_NOMAD
void Nomad_Register(DriverTable *driverTable);
void NomadPosition_Register(DriverTable *driverTable);
void NomadSonar_Register(DriverTable *driverTable);
//void NomadBumper_Register(DriverTable *driverTable);
//void NomadSpeech_Register(DriverTable *driverTable);
#endif

/*
 * this function will be called at startup.  all available devices should
 * be added to the driverTable here.  they will be instantiated later as 
 * necessary.
 */
void
player_register_drivers()
{
#ifdef INCLUDE_BUMPERSAFE
  BumperSafe_Register(driverTable);
#endif

#ifdef INCLUDE_GARMINNMEA
  GarminNMEA_Register(driverTable);
#endif

#ifdef INCLUDE_MAPFILE
  MapFile_Register(driverTable);
#endif

#ifdef INCLUDE_MAPCSPACE
  MapCspace_Register(driverTable);
#endif

#ifdef INCLUDE_MAPSCALE
  MapScale_Register(driverTable);
#endif

#ifdef INCLUDE_AMTECPOWERCUBE
  AmtecPowerCube_Register(driverTable);
#endif

#ifdef INCLUDE_CLODBUSTER
  ClodBuster_Register(driverTable);
#endif

#ifdef INCLUDE_OBOT
  Obot_Register(driverTable);
#endif

#ifdef INCLUDE_ER1
  ER_Register(driverTable);
#endif

#ifdef INCLUDE_WAVEFRONT
  Wavefront_Register(driverTable);
#endif

#ifdef INCLUDE_SEGWAYRMP
  SegwayRMP_Register(driverTable);
#endif

#ifdef INCLUDE_LASERPOSEINTERPOLATOR
  LaserPoseInterp_Register(driverTable);
#endif

#ifdef INCLUDE_SICKLMS200
  SickLMS200_Register(driverTable);
#endif
  
#ifdef INCLUDE_SICKPLS
  SickPLS_Register(driverTable);
#endif

#ifdef INCLUDE_ACTS
  Acts_Register(driverTable);
#endif

#ifdef INCLUDE_CMVISION
  CMVision_Register(driverTable);
#endif

#ifdef INCLUDE_CMUCAM2
  Cmucam2_Register(driverTable);
  // REMOVE Cmucam2blobfinder_Register(driverTable);
  // REMOVE Cmucam2ptz_Register(driverTable);
#endif

#ifdef INCLUDE_UPCBARCODE
  UPCBarcode_Register(driverTable);
#endif

#ifdef INCLUDE_SIMPLESHAPE
  SimpleShape_Register(driverTable);
#endif

#ifdef INCLUDE_FESTIVAL
  Festival_Register(driverTable);
#endif

#ifdef INCLUDE_SPHINX2
  Sphinx2_Register(driverTable);
#endif

#ifdef INCLUDE_LASERBAR
  LaserBar_Register(driverTable);
#endif

#ifdef INCLUDE_LASERBARCODE
  LaserBarcode_Register(driverTable);
#endif

#ifdef INCLUDE_LASERVISUALBARCODE
  LaserVisualBarcode_Register(driverTable);
#endif

#ifdef INCLUDE_LASERVISUALBW
  LaserVisualBW_Register(driverTable);
#endif

#ifdef INCLUDE_LASERCSPACE
  LaserCSpace_Register(driverTable);
#endif
  
#ifdef INCLUDE_RFLEX
  RFLEX_Register(driverTable);
#endif

#ifdef INCLUDE_SONYEVID30
  SonyEVID30_Register(driverTable);
#endif

#ifdef INCLUDE_PTU46
  PTU46_Register(driverTable);
#endif

#ifdef INCLUDE_CANONVCC4
  canonvcc4_Register(driverTable);
#endif

#ifdef INCLUDE_FLOCKOFBIRDS
  FlockOfBirds_Register(driverTable);
#endif

#ifdef INCLUDE_DUMMY
  Dummy_Register(driverTable);
#endif

#ifdef INCLUDE_PASSTHROUGH
  PassThrough_Register(driverTable);
#endif

#ifdef INCLUDE_LOGFILE
  WriteLog_Register(driverTable);  
//  ReadLog_Register(driverTable);
#endif

#ifdef INCLUDE_P2OS
  P2OS_Register(driverTable);
#endif

#ifdef INCLUDE_FIXEDTONES
  FixedTones_Register(driverTable);
#endif

#ifdef INCLUDE_ACOUSTICS
  Acoustics_Register(driverTable);
#endif

#ifdef INCLUDE_MIXER
  Mixer_Register(driverTable);
#endif

#ifdef INCLUDE_RWI
  RWIPosition_Register(driverTable);
  RWISonar_Register(driverTable);
  RWILaser_Register(driverTable);
  RWIBumper_Register(driverTable);
  RWIPower_Register(driverTable);
#endif
  
#ifdef INCLUDE_LINUXWIFI
  LinuxWiFi_Register(driverTable);
#endif

#ifdef INCLUDE_AODV
  Aodv_Register(driverTable);
#endif

#ifdef INCLUDE_IWSPY
  Iwspy_Register(driverTable);
#endif

#ifdef INCLUDE_LINUXJOYSTICK
  LinuxJoystick_Register(driverTable);
#endif

#ifdef INCLUDE_REB
  REB_Register(driverTable);
#endif

#ifdef INCLUDE_KHEPERA
  Khepera_Register(driverTable);
#endif

#ifdef INCLUDE_ISENSE
  InertiaCube2_Register(driverTable);
#endif

#ifdef INCLUDE_MICROSTRAIN
  MicroStrain3DMG_Register(driverTable);
#endif
  
#ifdef INCLUDE_INAV
  INav_Register(driverTable);
#endif

#ifdef INCLUDE_VFH
  VFH_Register(driverTable);
#endif

#ifdef INCLUDE_WAVEAUDIO
  Waveaudio_Register(driverTable);
#endif

#ifdef INCLUDE_MCL
  RegularMCL_Register(driverTable);
#endif

#ifdef INCLUDE_AMCL
  AdaptiveMCL_Register(driverTable);
#endif

#ifdef INCLUDE_LIFOMCOM
  LifoMCom_Register(driverTable);
#endif

#ifdef INCLUDE_CAMERAV4L
  CameraV4L_Register(driverTable);
#endif

#ifdef INCLUDE_CAMERA1394
  Camera1394_Register(driverTable);
#endif

#ifdef INCLUDE_IMAGESEQ
  ImageSeq_Register(driverTable);
#endif

#ifdef INCLUDE_CAMERACOMPRESS
  CameraCompress_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_SIM
  GzSim_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_CAMERA
  GzCamera_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_FACTORY
  GzFactory_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_FIDUCIAL
  GzFiducial_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_GPS
  GzGps_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_LASER
  GzLaser_Register(driverTable);
#endif
  
#ifdef INCLUDE_GAZEBO_POSITION
  GzPosition_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_POSITION3D
  GzPosition3d_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_POWER
  GzPower_Register(driverTable);
#endif
  
#ifdef INCLUDE_GAZEBO_PTZ
  GzPtz_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_TRUTH
  GzTruth_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_GRIPPER
  GzGripper_Register(driverTable);
#endif

// Deprecated; for Gazebo 0.4 compatability
#ifdef INCLUDE_GAZEBO_SONARS
  GzSonars_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_SONAR
  GzSonar_Register(driverTable);
#endif

#ifdef INCLUDE_GAZEBO_STEREO
  GzStereo_Register(driverTable);
#endif


#ifdef INCLUDE_SERVICE_ADV_LSD
  ServiceAdvLSD_Register(driverTable);
#endif

#ifdef INCLUDE_SERVICE_ADV_MDNS
  ServiceAdvMDNS_Register(driverTable);
#endif

#ifdef INCLUDE_FAKELOCALIZE
  FakeLocalize_Register(driverTable);
#endif

#ifdef INCLUDE_NOMAD
  Nomad_Register(driverTable);
  NomadPosition_Register(driverTable);
  NomadSonar_Register(driverTable);
  //NomadBumper_Register(driverTable);
  //NomadSpeech_Register(driverTable);
#endif

#ifdef INCLUDE_STAGECLIENT
  StgSimulation_Register(driverTable);
  StgLaser_Register(driverTable);
  //StgPosition_Register(driverTable);
  //StgSonar_Register(driverTable);
  //StgFiducial_Register(driverTable);
  //StgBlobfinder_Register(driverTable);

  //StgEnergy_Register(driverTable);
  //StgBlinkenlight_Register(driverTable);
#endif
}