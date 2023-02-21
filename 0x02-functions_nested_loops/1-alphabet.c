#include "main.h"

/**
* main - Entry Point
* description: - print alphabet
* Return: 0 Always
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
