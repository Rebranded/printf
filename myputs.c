#include "main.h"

/**
 * my_puts - function that print string stdout.
 * @str: string parameter to be printed.
 * Return: return the number of bytes of characters printed.
 *
 */
int my_puts(const char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	_putchar('\n');

	return (count);
}

