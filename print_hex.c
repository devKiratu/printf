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
