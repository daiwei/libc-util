#include "util.h"
#include "log.h"

void thread_sleep(uint32_t millisec)
{
    struct timeval tv;
    tv.tv_sec = millisec / 1000;
    tv.tv_usec = millisec % 1000;
    select(0, 0, 0, 0, &tv);
}
