#include <stdio.h>
/**
 * print_octal - prints octal
 * @args: list of arguments
 * Return: returns printed octal
 */
print_octal(va_lists args)
{
	unsigned int i = va_arg(args, unsigned int);
	int count = 0;
	unsigned int num = i;

	while (num > 0)
	{
		num /= 8;
		count++;
	}
	convert_to_octal(i);
	return (count);
}
/**
 * convert_to_octal - converts to octal
 * @i: parameter
 */
void convert_to_octal(unsigned int i)
{
	if (i == 0)
		return;
	int rd = i % 8;

	i /= 8;
	convert_to_octal(i);
	_putchar('0' + rd);
}
