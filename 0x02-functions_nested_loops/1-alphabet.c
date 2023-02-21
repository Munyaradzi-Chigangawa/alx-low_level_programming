#include "main.h"

/**
* main - Entry Point
* description: - print alphabet
* Return: void
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
