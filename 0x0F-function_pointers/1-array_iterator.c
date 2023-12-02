#include "main.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array to iterate through
 * @size: size of the array
 * @action: function pointer to the function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
			action(array[i]);
	}

}
