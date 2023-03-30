#include "main.h"
/**
 * print_reverse - prints string reverse
 * @args: va_list containing string to be printed
 * Return: returns number of chars printed
 */
int print_reverse(va_list *args)
{
	va_list ap;
	char *s;
	int count = 0, len = 0;

	va_copy(ap, *args);
	s = va_arg(ap, char *);

	/* get string length */
	while (s[len] != '\0')
		len++;

	/* loop from last char to first char */
	while ((len - 1) >= 0)
	{
		_putchar(s[len - 1]);
		len--;
		count++;
	}
	return (count);
}
