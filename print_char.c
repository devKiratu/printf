#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing character to print
 * Return: 1 on success or -1 on failure
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	return (_putchar(c));
}
