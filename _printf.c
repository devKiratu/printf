#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - produces output according to the format
 * @format: list of type of arguments passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += format_output(format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * format_output - prints to stdout using the format specified
 * @format: format specifier
 * @args: argument list
 * Return: number of characters printed
 */
int format_output(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'c':
			count += _putchar((char)va_arg(args, int));
			break;
		case 's':
			count += _puts(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += print_number(va_arg(args, int));
			break;
		case 'b':
			count += print_binary(va_arg(args, int));
			break;
		case '%':
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}
	return (count);
}
