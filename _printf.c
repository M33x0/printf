#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#define MAC_A                \
	{                        \
		_putchar('%');       \
		_putchar(format[i]); \
		j += 2;              \
		i++;                 \
	}
#define MAC_B                \
	{                        \
		_putchar(format[i]); \
		j++;                 \
		i++;                 \
	}
#define MAC_C             \
	{                     \
		j += choice(arg); \
		i++;              \
	}
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
			MAC_B;
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
					MAC_A
				else
					MAC_C
			}
		}
	}
	va_end(arg);
	return (j);
}
