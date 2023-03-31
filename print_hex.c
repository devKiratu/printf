#include "main.h"
/**
 * print_upper_hex - prints upper hexadecimals
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_upper_hex(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int num = i;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		num /= 16;
		count++;
	}
	convert_to_hex(i, 'X');
	return (count);
}
/**
 * print_lower_hex - prints lower hexadecimals
 * @args: - list of arguments
 * Return: number of characters printed
 */
int print_lower_hex(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int num = i;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		num /= 16;
		count++;
	}
	convert_to_hex(i, 'x');
	return (count);
}
/**
 * convert_to_hex - converts to hexadecimal
 * @i: unsigned int to convert
 * @fmt: hex format specifier: x for lowercase, X for uppercase
 */
void convert_to_hex(unsigned int i, char fmt)
{
	int rd;

	if (i == 0)
		return;
	rd = i % 16;

	i /= 16;
	convert_to_hex(i, fmt);

	if (rd > 9)
	{
		rd -= 10;
		_putchar((fmt == 'x' ? 'a' : 'A') + rd);
	}
	else
	{
		_putchar('0' + rd);
	}
}
