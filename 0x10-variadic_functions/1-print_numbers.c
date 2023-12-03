#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, separated by a string.
 * @separator: The string to be printed between numbers (if not NULL).
 * @n: The number of integers passed to the function.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
