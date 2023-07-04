#include "main.h"
/**
 * print_string - function that prints string
 * @user: other arguments.
 * Return: return number of characters printed
 */
int print_string(va_list user)
{
	char *str = va_arg(user, char *);
	int i;
	int len = strlen(str);

	if (str == NULL)
	{
		str = "(nil)";
	}
	for (i = 0; i < len; i++)
	{
		_putchar (str[i]);
	}

	return (len);
}

