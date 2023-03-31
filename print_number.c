#include "main.h"
/**
 * print_number - prints given input using _putchar
 * @args: va_list containing integer to print
 * Return: void
 */
int print_number(va_list args)
{
	int count = 0, n, first_digit, place_value = 1;
	unsigned int input, new_n;

	n = va_arg(args, int);
	input = n;
	new_n = n;

	/* handle negative numbers */
	if (n < 0)
	{
		_putchar(45);
		count++;
		new_n = -new_n;
		input = -input;
	}
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
