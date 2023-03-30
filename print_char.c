#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing character to print
 * Return: 1 on success or -1 on failure
 */
int print_char(va_list *args)
{
	va_list ap;
	char c;

	va_copy(ap, *args);
	c = va_arg(ap, int);

	return (_putchar(c));
}
