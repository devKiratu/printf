#include "main.h"

/**
 * print_str - prints a string on the standard output
 * @args: arguments list from where to extract string to print
 * Return: number of characters printed
 */
int print_str(va_list *args)
{
	va_list ap;
	char *s;
	int i = 0;

	va_copy(ap, *args);
	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
