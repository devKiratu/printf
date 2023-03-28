#include "main.h"

/**
 * print_rot13 - encrypts passed in string using rot13
 * @s: string to encrypt
 * Return: number of characters printed
 */
int print_rot13(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			_putchar(((s[i] - 'A' + 13) % 26) + 'A');
			count++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			_putchar(((s[i] - 'a' + 13) % 26) + 'a');
			count++;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
		i++;
	}
	return (count);
}
