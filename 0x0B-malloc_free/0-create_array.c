#include "main.h"
/**
 * create_array - creates an arrays of chars
 * @size: size of arrays
 * @c: character to insert
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(size of(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
