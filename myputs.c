#include "main.h"
/**
 * my_print - function that print string stdout.
 * @str: string parameter to be printed.
 * Return: return the number of bytes of characters printed.
 *
 */
int my_print(const char *str)
{
	int i = 0;
	int count = 0;
	char nil[] = "(null)";

	if (str == NULL)
	{
		_putchar(nil[i]);
		i++;
		count++;
	}

	else
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			count++;
		}
	}
	return (count);
}

