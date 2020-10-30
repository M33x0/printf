#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>

/**
 * struct choice - print types
 * @t:char type
 * @fn: function
 *
 */
typedef struct choice
{
	char *t;
	int (*fn)(va_list);
} choice;

int _printf(const char *format, ...);
int _putchar(char c);
/*print a string*/
int _print_str(va_list arg);
/*print a char*/
int _print_char(va_list arg);
/*print pourcent*/
int _print_pourcent(va_list __attribute__((unused)) arg);
/*print reverse string*/
int _print_reverse_str(va_list arg);
/*get the fspec*/
int (*get_spec_fn(const char *format))(va_list);
#endif /*_HOLBERTON_H*/
