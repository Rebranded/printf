#include "main.h"
/**
 * print_int - function that print integer by specifier %d
 * @user_input: va_list.
 * @buffer: buffer to store local variable
 * @buff_index: buffer index
 * Return: return the number of charcter
 */
int print_int(va_list (user_input), char *buffer, int buff_index)
{
	int num = va_arg(user_input, int);
	char temp[12];
	int len = strlen(temp);

	snprintf(temp, sizeof(temp), "%d", num);

	if (buff_index + len >= 1023)
	{
		write(1, buffer, buff_index);
		buff_index = 0;
	}
	memcpy(buffer + buff_index, temp, len);
	buff_index += len;
	return (buff_index);
}

