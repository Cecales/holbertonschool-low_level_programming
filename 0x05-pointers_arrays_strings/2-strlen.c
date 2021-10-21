#include <stdio.h>
#include "main.h"

/**
 * _strlen - return the value of the length of a string
 * @s: variable to be evaluate.
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
