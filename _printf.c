#include "main.h"
#include <stdarg.h>

/**
 * _printf - function produces output according to a format.
 *  Return: is the count of printed characters
 *  @format: is a pointer to string
 */
int _printf(const char *format, ...)
{
	const char *string;

	int count = 0;

	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	string = format;

	count = loop_format(string, args);

	va_end(args);

	return (count);
}
