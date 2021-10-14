#include "main.h"

/**
 * print_triangle - this program prints a triangle
 * @size: use in a integer for size of triangle
 */

void print_triangle(int size)
{
	int base, height, i;

	if (size <= 0)
		_putchar('\n');
	for (base = 0; base < size; base++)
	{
		for (height = size - base; height > 1; height--)
			_putchar(' ');
		for (i = base + height; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}
