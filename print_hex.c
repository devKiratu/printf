#include <stdio.h>
/**
 * print_upper_hex - prints upper hexadecimals
 * @args: list of arguments
 * Return: upper hexadecimals
 */
int print_upper_hex(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int num = i;

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
 * Return: lower hexadecimals
 */
int print_lower_hex(va_list args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int num = i;

	while (num > o)
	{
		num /= 16;
		count++;
	}
	convert_to_hex(i, 'x');
	return (count);
}
/**
 * convert_to_hex - converts to hexadecimal
 * @i: parameter
 * @fmt: parameter
 */
void convert_to_hex(unsigned int i, char fmt)
{
	if (i == 0)
		return;
	int rd = i % 16;

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
