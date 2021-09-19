#include <stdio.h>
#define ADJUST 7.31  // one kind of symbolic constant


int main(void)
{
    const double SCALE = 0.333; // another kind of symbolic constant
    double shoes, foot;

    shoes = 9;
    foot = SCALE * shoes + ADJUST;

    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoes, foot);


    return 0;
}