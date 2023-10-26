#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: input number
 *
 * Return: -1 if the number is less than 0, 1 if bigger than 0.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
