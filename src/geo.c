#include "geo.h"

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
