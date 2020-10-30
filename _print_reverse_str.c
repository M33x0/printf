#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

int _print_reverse_str(va_list arg)
{
	char *str;
	int i, j;

	str = va_arg(arg, char *);

	while (str[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);
}
