#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **result;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	for (i = 0, j = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;
		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (result[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(result[k]);
			free(result);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			result[i][k] = str[j + k];
		result[i][k] = '\0';
		j += len;
	}
	result[words] = NULL;
	return (result);
}
