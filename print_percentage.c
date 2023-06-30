#include "main.h"
/**
 * print_percentage - function that prints percentage sign
 * @user_input: va_list.
 * @buffer: local buffer to store characters
 * @buff_index: buffer index
 * Return: return number of characters written
 */
int print_percentage(va_list user_input, char *buffer, int buff_index)
{
	char c = '%';

	if (buff_index >= 1023)
	{
		write(1, buffer, buff_index);
		buff_index = 0;
	}
	buffer[buff_index++] = c;
	return (buff_index);
}
