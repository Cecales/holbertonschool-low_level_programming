#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
	char abc;

	abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
