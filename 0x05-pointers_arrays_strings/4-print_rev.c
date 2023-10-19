#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: input parameter.
 * 
 * Return: Always 0.
 */

void print_rev(char *s)
{
   int i;
   while (s[i])
      i++;
   while (i--)
   {
      _putchar(s[i];)
   }
   _putchar('\n');
}
