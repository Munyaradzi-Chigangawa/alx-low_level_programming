#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lower case,
 * then in uppercase,
 * followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
