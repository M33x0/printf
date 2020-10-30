#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_char - Print Char
 * @arg: argument to print
 */
int _print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}
