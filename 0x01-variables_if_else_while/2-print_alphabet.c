#include <stdio.h>

/**
 * main - entry point
 * Description: printing the alphabet in lowerCase
 * Return: 0 if successfully executed
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
