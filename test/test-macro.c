#include <stdio.h>
#include <macro.h>

#ifdef DO
#undef DO
#endif
#define DO(arg)                 printf("LOG: " arg "\n")

int main()
{
    FOREACH("s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8");
    return 0;
}
