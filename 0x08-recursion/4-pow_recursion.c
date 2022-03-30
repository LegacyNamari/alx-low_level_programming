#include "main.h"

/**
 * _pow_recursion - return the value x raised to the power of y
 * @x: base number
 * @y: exponent number.
 * Return: result = x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
