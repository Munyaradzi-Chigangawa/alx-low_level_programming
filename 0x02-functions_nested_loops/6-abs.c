#include "main.h"

/**
 * _abs - entry point
 * @x: takes an integer
 * description: computing value of on integer
 * return: Always 0 (Success)
 */

int _abs(int x)
{
	if ( x < 0)
		x = (-1) * x;
	return (x);
}
