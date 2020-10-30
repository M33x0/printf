#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_pourcent - prints % after finding %
 * @arg: argument
 * Return: 1
 */
int _print_pourcent(va_list __attribute__((unused)) arg)
{
	_putchar('%');
	return (1);
}
