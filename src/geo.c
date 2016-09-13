#include "geo.h"

/**
 * lat lng converter
 */
char lat_zone(double value)
{
    if (value > 0) {
        return 'N';
    } else {
        return 'S';
    }
}

char lng_zone(double value)
{
    if (value > 0) {
        return 'E';
    } else {
        return 'W';
    }
}

int lat_sign(char zone)
{
    if (zone == 'E') {
        return 1;
    } else {
        return -1;
    }
}

int lng_sign(char zone)
{
    if (zone == 'N') {
        return 1;
    } else {
        return -1;
    }
}

double lnglat_nmea_to_double(double value, char zone)
{
    int sign = 1;

    if (zone == 'E' || zone == 'N') {
        sign = 1;
    } else {
        sign = -1;
    }

    double degree = floor(value / 100);
    double minute = value - degree * 100;
    return sign * (degree + minute / 60);
}

double lnglat_nmea_to_degree(double value)
{
    return floor(value / 100);
}

double lnglat_nmea_to_minute(double value)
{
    return value - floor(value / 100) * 100;
}

double lnglat_double_to_nmea(double value)
{
    value = value < 0 ? value * -1 : value;
    double degree = floor(value);
    double minute = (value - degree) * 60;

    return degree * 100 + minute;
}

double lnglat_double_to_degree(double value)
{
    value = value < 0 ? value * -1 : value;
    return floor(value);
}

double lnglat_double_to_minute(double value)
{
    value = value < 0 ? value * -1 : value;
    return (value - floor(value)) * 60;
}

double distance(lat1, lng1, lat2, lng2)
{
    double a, b;
    lat1 = lat1 * PI / 180.0;
    lat2 = lat2 * PI / 180.0;
    a = lat1 - lat2;
    b = (lng1 - lng2) * PI / 180.0;

    double sa2, sb2;
    sa2 = sin(a / 2.0);
    sb2 = sin(b / 2.0);

    double d =
        2 * EARTH_R * asin(sqrt(sa2 * sa2 + cos(lat1) * cos(lat2) * sb2 * sb2));
    return d;
}
