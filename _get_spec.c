#include "holberton.h"
#include <string.h>
#include <stdlib.h>

int (*get_spec_fn(const char *format))(va_list)
{
	int i;
	choice cx[] = {{"c", _print_char},
				   {"s", _print_str},
				   {"r", _print_reverse_str},
				   {"%", _print_pourcent},
				   {NULL, NULL}};

	for (i = 0; cx[i].t != NULL; i++)
	{
		if (*format == *(cx[i].t))
		{
			break;
		}
	}
	return (cx[i].fn);
}
