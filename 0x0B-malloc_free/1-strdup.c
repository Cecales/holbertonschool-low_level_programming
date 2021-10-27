#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as parameter
 * @i: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *i)
{
	char *dup;
	unsigned int a, b;

	a = 0;
	b = 0;

	if (i == NULL)
		return (NULL);

	while (i[b])
		b++;

	dup = malloc(sizeof(char) * (b + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[a] = i[a]) != '\0')
		a++;

	return (dup);
}
