#include "main.h"
/**
 * print_unsigned_int - prints unsigned integer
 * @args: va_list containing unsigned int to print
 * Return: number of characters printed
 */
int print_unsigned_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	int first_digit, place_value = 1;
	unsigned int input = n, new_n = n;
	/* get the place value of the first digit */
	while (input >= 10)
	{
		input /= 10;
		place_value *= 10;
	}
	/* print the digits */
	while (place_value > 0)
	{
		first_digit = new_n / place_value;
		_putchar('0' + first_digit);
		new_n = new_n - (first_digit * place_value);
		place_value /= 10;
		count++;
	}
	return (count);
}
