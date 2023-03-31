#include "main.h"

/**
 * print_non_printables - prints strings with non-printables characters as hex
 * @args: va_list containing string to print
 * Return: number of characters printed
 */
int print_non_printables(va_list args)
{
	int count = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		if ((*s > 0 && *s < 32) || *s >= 127)
			count += replace_with_hex(*s);
		else
			count += _putchar(*s);

		s++;
	}

	return (count);
}

/**
 * replace_with_hex - replaces a non-printable character with its hex value
 * @c: non-printable character to replace
 * Return: number of characters printed
 */
int replace_with_hex(char c)
{
	int len = 0, count = 0, x;

	x = c;
	while (x > 0)
	{
		x /= 16;
		len++;
	}

	count += _putchar('\\');
	count += _putchar('x');
	if (len < 2)
		count += _putchar('0');
	format_hex((unsigned int)c);

	count += len;
	return (count);
}

/**
 * format_hex - formats input into hex value
 * @i: decimal equivalent equivalent
 * Return: void
 */
void format_hex(unsigned int i)
{
	int rd;

	if (i == 0)
		return;

	rd = i % 16;

	i /= 16;
	format_hex(i);

	if (rd > 9)
	{
		rd -= 10;
		_putchar('A' + rd);
	}
	else
	{
		_putchar('0' + rd);
	}
}
