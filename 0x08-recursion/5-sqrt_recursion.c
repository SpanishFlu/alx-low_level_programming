#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input parameter.
 *
 * Return: the sr of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(n, 1));
}
