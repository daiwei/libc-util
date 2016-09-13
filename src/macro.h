#ifndef __LIBC_UTIL_MACRO_H__
#define __LIBC_UTIL_MACRO_H__

/**
 * max args size: 9
 */
#define GET_10TH(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, ...)  a10
#define ARGS_SIZE(...)          GET_10TH(__VA_ARGS__, 9, 8, 7, 6, 5, 4, 3, 2, 1, throwaway)

#define FOREACH(...)            SEPARATE(ARGS_SIZE(__VA_ARGS__), __VA_ARGS__)
#define SEPARATE_(n)            SEPARATE_##n
#define SEPARATE(n, ...)        SEPARATE_(n)(__VA_ARGS__)

#define SEPARATE_1(arg)         DO(arg)
#define SEPARATE_2(arg, ...)    DO(arg); SEPARATE_1(__VA_ARGS__)
#define SEPARATE_3(arg, ...)    DO(arg); SEPARATE_2(__VA_ARGS__)
#define SEPARATE_4(arg, ...)    DO(arg); SEPARATE_3(__VA_ARGS__)
#define SEPARATE_5(arg, ...)    DO(arg); SEPARATE_4(__VA_ARGS__)
#define SEPARATE_6(arg, ...)    DO(arg); SEPARATE_5(__VA_ARGS__)
#define SEPARATE_7(arg, ...)    DO(arg); SEPARATE_6(__VA_ARGS__)
#define SEPARATE_8(arg, ...)    DO(arg); SEPARATE_7(__VA_ARGS__)
#define SEPARATE_9(arg, ...)    DO(arg); SEPARATE_8(__VA_ARGS__)

#define DO(arg)                 printf("LOG: " arg "\n")

#endif//__LIBC_UTIL_MACRO_H__
