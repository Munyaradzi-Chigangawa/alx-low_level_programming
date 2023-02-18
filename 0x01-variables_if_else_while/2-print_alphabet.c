#include <stdio.h>

/*
 * main - entry point
 * description - printing the alphabet in lowerCase
 * return - 0 if successfully executed
 */

int main(void)
{
    char ch;

    for (
            ch = 'a';
            ch<= 'z';
            ch++
            )
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}