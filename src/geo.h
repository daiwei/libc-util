#ifndef __LIBC_UTIL_GEO_H__
#define __LIBC_UTIL_GEO_H__

#include <math.h>

#define PI                      3.14159265359
#define EARTH_R                 6378137

char lat_zone(double value);
char lng_zone(double value);
int lat_sign(char zone);
int lng_sign(char zone);

double lnglat_nmea_to_double(double value, char zone);
double lnglat_nmea_to_degree(double value);
double lnglat_nmea_to_minute(double value);
double lnglat_double_to_nmea(double value);
double lnglat_double_to_degree(double value);
double lnglat_double_to_minute(double value);

#endif//__LIBC_UTIL_GEO_H__
