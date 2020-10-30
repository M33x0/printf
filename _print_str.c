#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *_print_str - Print String
 *@arg: Input
 */
int _print_str(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
