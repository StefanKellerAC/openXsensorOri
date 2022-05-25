#ifndef OXS_CONFIG_ADVANCED_h
#define OXS_CONFIG_ADVANCED_h

#define PIN_SERIALTX 4

// --------- 9 - GPS ------------------------------------------------------------------------------------------------
//#define GPS_SPEED_IN_KMH  // uncomment this line if GPS speed has to be sent in km/h instead of knot/h (only for Frsky protocol)
#define GPS_SPEED_3D      // uncomment this line if GPS speed has to be the 3d speed instead of the 2d speed (note: 3d is probably less accurate - to test) 
#define GPS_REFRESH_RATE  5       // rate at which GPS sent new data; select between 1, 5 or 10 (Hz). Default = 5 Hz; Ublox NEO6 does not support 10 hz  

#endif
