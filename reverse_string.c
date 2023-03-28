#include "main.h"
/**
 * print_reverse - prints string reverse
 * @s: string to be printed
 * Return: returns number of chars printed
 */
int print_reverse(char *s)
{
	{
		int count = 0;
		int len = 0;

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
}
