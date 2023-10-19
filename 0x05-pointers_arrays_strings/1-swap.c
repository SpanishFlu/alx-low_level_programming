#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: input parameter 1.
 * @b: input parameter 2.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
