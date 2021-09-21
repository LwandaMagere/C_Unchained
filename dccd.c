// alters input, preserving spaces
#include <stdio.h>
#define SPACE ' '

int main(void)
{
    char ch;
    ch = getchar(); // read a character
    while (ch != '\n') // while not at the end of line
    {
        if (ch == SPACE)
            putchar(ch); // character unchanged
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch); // print the newline

    return 0;
}