#include "main.h"

/**
 * _islower - is a function to check if the
 * charachter is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is a lowercase
 * otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
