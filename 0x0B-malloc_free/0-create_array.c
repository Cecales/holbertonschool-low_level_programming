#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
