#include "main.h"
/**
 * print_string - function that prints string
 * @user_input: va_list
 * Return: returns number of characters written.
 * @buffer: buffer to temporarily story input
 * @buff_index: buffer index
 */

int print_string(va_list user_input, char *buffer, int buff_index)
{
	int len = 0, i = 0;
	char *str;

	str = va_arg(user_input, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	len = strlen(str);
	if (buff_index + len >= 1023)
	{
		write(1, buffer, buff_index);
		buff_index = 0;
	}
	memcpy(buffer + buff_index, str, len);
	buff_index += len;
	return (buff_index);
}
