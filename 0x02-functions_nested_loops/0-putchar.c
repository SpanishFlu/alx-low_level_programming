#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints _putchar, follower by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	ctar str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar("\n");

	return (0);
}
