#ifndef __COMMON_DEF_H__
#define __COMMON_DEF_H__

#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <limits.h>
#include <stdarg.h>
#include <math.h>
#include <pthread.h>
#include <dlfcn.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <libgen.h>
#include <sys/time.h>
#include <iniparser/iniparser.h>

/**
 * type define
 */
// #define bool                    int
#define false                   0
#define true                    1

#define int16                   int16_t
#define uint16                  uint16_t
#define int32                   int32_t
#define uint32                  uint32_t
#define int64                   int64_t
#define uint64                  uint64_t
#define uint                    unsigned int
#define byte                    char
// #define addr                    char*

/**
 * constant define
 */
#define CPU_BIT_WIDTH           sizeof(long)

#define PI                      3.14159265359
#define EARTH_R                 6378137

/**
 * result type define
 */
#define SUCCESS                 0
#define FAILURE                 1


#endif/*__COMMON_DEF_H__*/
