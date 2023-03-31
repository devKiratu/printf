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
