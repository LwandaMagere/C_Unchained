// user-defined output functions
#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main()
{
    put1("If I'd as much moeny");
    put1(" as I could spend,\n");
    printf("I could %d characters.\n", puts("I will never would cry old chairs to mend"));
    
    return 0;
}

void put1(const char * string)
{
    while (*string)// same as *string != '\0'
        putchar(*string++);
}

int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return(count);
}