#include "main.h"

/**
 * print_last_digit - Entry point
 * @i: return val
 * Description: prints last integer
 * Return: Integer
 */

int print_last_digit(int i)
{
	int val;

	val = i % 10;
	if (val < 0)
		val *= -1;

	_putchar(val + '0');

	return (val);
}
