#include "main.h"

/**
 * main - Entry Point
 * description: print alphabet x10 times
 * return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}