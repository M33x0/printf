#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Print anything
 * @format: string
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	int (*choice)(va_list);

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			j++;
			i++;
		}
		if (format[i] == '%' && format[i + 1] == '\0')
			continue;
		if (format[i] == '%')
		{
			i++;
			for (; format[i] == ' '; i++)
			;
			if (format[i] == '\0')
			{
				return (j);
			}
			else
			{
			choice = get_spec_fn(&format[i]);
				if (choice == NULL)
				{
					_putchar('%');
					_putchar(format[i]);
					j += 2;
					i++;
				}
				else
				{
					j += choice(arg);
					i++;
				}
			}
		}
	}
	va_end(arg);
	return (j);
}