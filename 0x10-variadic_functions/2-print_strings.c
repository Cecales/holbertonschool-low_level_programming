#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of arguments passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(NULL)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");
	va_end(list);
}
