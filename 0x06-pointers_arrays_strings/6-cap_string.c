#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;
	bool capitalize_next = true;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (capitalize_next || index == 0)
			{
				str[index] -= 32;
			}
			capitalize_next = false;
		}
		else
		{
			capitalize_next = (str[index] == ' ' ||
					str[index] == '\t' ||
					str[index] == '\n' ||
					str[index] == ',' ||
					str[index] == ';' ||
					str[index] == '.' ||
					str[index] == '!' ||
					str[index] == '?' ||
					str[index] == '"' ||
					str[index] == '(' ||
					str[index] == ')' ||
					str[index] == '{' ||
					str[index] == '}');
		}
		index++;
	}
	return (str);
}

