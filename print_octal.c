#include "main.h"
/**
 * print_octal - formats unsigned integers as octal
 * @args: va_list containing integer to format
 * Return: returns number of characters printed
 */
int print_octal(va_list args)
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
		num /= 8;
		count++;
	}
	convert_to_octal(i);
	return (count);
}
/**
 * convert_to_octal - converts unsigend int to octal
 * @i: unsigned integer to convertr
 * Return: void
 */
void convert_to_octal(unsigned int i)
{
	int rd;

	if (i == 0)
		return;
	rd = i % 8;

	i /= 8;
	convert_to_octal(i);
	_putchar('0' + rd);
}
