#include "main.h"

/**
 * print_str - prints a string on the standard output
 * @args: va_list from where to extract string to print
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
