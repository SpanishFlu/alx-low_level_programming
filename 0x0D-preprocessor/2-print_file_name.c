#include "2-main.h"

/**
 * print_file_name - Prints the name of the file it was compiled from
 */

void print_file_name(void)
{
	char *filename = __FILE__;

	while (*filename)
	{
		putchar(*filename);
		filename++;
	}
	putchar('\n');
}
