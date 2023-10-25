#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_replacements[] = "443370711";

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = leet_replacements[*ptr - 'a'];
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = leet_replacements[*ptr - 'A'];
		}
		ptr++;
	}

	return (str);
}
