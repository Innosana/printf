#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @c: number to be computed
 * Return: Absolute value or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

abs_val = c * -1;
return (abs_val);
	}
	return (c);
}
