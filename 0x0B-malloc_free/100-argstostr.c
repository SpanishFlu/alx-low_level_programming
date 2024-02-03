#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: A pointer to the concatenated string.
 *         NULL if ac == 0 or av == NULL, or if malloc fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *conc_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}
	conc_str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (conc_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			conc_str[k++] = av[i][j];
		conc_str[k++] = '\n';
	}
	conc_str[k] = '\0';
	return (conc_str);
}
