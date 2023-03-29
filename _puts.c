#include "main.h"

/**
 * _puts - prints a string on the standard output
 * @s: string to be printed
 * Return: number of characters printed
 */
int _puts(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
