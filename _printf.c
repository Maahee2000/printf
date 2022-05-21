#include "main.h"
#include <stdarg.h>

/**
 * _printf - function produces output according to a format.
 * @format: is a pointer to string
 * Return: is the count of printed characters
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

/**
 * loop_format - function is to print format
 * @format: is a pointer to string
 * @args: is a va_list args
 * Return: is an integer.
 */
int loop_format(const char *format, va_list args)


