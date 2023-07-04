#include "main.h"
/**
 * print_string - function that prints string
 * @user: other arguments.
 * Return: return number of characters printed
 */
int print_string(va_list user)
{
	char *str = va_arg(user, char *);
	int count = 0, i = 0;

	if (str == NULL)
	{
		str = "(nil)";
	}
	while (str[i] != '\0')
	{
		_putchar (str[i]);
		count++;
		i++;
	}

	return (count);
}

