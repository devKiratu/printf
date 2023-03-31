#include "main.h"

/**
 * print_address - prints address of pointer received
 * @args: va_list containing address to print
 * Return: number of characters printed
 */
int print_address(va_list args)
{
	int count = 0;
	unsigned long int ul, num;
	void *ptr;

	ptr = va_arg(args, void *);

	if (ptr == NULL)
		return (_printf("%s", "(nil)"));

	ul = (unsigned long int)ptr;
	num = ul;

	while (num > 0)
	{
		num /= 16;
		count++;
	}

	count += _putchar('0');
	count += _putchar('x');
	format_address(ul);

	return (count);
}

/**
 * format_address - formats an unsigned long int into hex
 * @ul: unsigned long int to format
 * Return: void
 */
void format_address(unsigned long int ul)
{
	unsigned long int rd;

	if (ul == 0)
		return;

	rd = ul % 16;
	ul /= 16;
	format_address(ul);

	if (rd > 9)
	{
		rd -= 10;
		_putchar('a' + rd);
	}
	else
	{
		_putchar('0' + rd);
	}
}






