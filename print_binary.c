#include "main.h"

/**
 * print_binary - converts an unsigned integer to binary and prints it
 * @i: the unsigned integer to print
 * Return: number of characters printed
 */
int print_binary(unsigned int i)
{
	int count = 0;
	unsigned int x = i;

	if (i == 0)
		count = 1;

	/* counts the characters to be printed once converted to binary */
	while (x > 0)
	{
		x /= 2;
		count++;
	}

	convert_to_bin(i);
	return (count);
}

/**
 * convert_to_bin - converts an unsigned int to binary and prints it
 * @i: unsigned int to print
 * Return: void
 */
void convert_to_bin(unsigned int i)
{
	unsigned int rd;

	if (i == 0)
	{
		_putchar('0');
		return;
	}

	rd = i % 2;

	i /= 2;
	convert_to_bin(i);
	_putchar('0' + rd);
}
