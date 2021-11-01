/*altnames.c -- portable names for integer types*/
#include <stdio.h>
#include <inttypes.h> // support portable types

int main(void)
{
    int32_t me32; // me32 a 32-bit signed variable
    me32 = 45933945;
    print("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macror\" from inttypes.h: ");
    printf("meew = %" PRId32 "\n", me32);
    return 0;
}
