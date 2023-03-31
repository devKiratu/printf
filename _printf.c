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
			if (*format == '\0')
				return (-1);
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
	int count = 0, i = 0, found = 0, len;
	print_ops options[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_number},
		{'d', print_number},
		{'b', print_binary},
		{'r', print_reverse},
		{'R', print_rot13},
		{'%', print_mod},
		{'S', print_non_printables},
		{'u', print_unsigned_int},
		{'X', print_upper_hex},
		{'x', print_lower_hex},
		{'o', print_octal},
		{'p', print_address},
	};

	len = (sizeof(options) / sizeof(print_ops));
	while (i < len)
	{
		if (*format == options[i].type)
		{
			count += options[i].printer(args);
			found = 1;
			break;
		}
		i++;
	}

	if (!found)
	{
		count += _putchar('%');
		count += _putchar(*format);
	}
	return (count);
}
