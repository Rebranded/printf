#include "main.h"
/**
 * print_char - function that print characters to stdout
 * @user_input: va_list.
 * Return: return the writtern character.
 * @buffer: buffer for local variables
 * @buff_index: buffer index
 */
int print_char(va_list user_inputi, char *buffer, int buff_index)
{
	char c;

	c = va_arg(user_input, int);
	if (buff_index >= 1023)
	{
		write(1, buffer, buff_index);
		buff_index = 0;
	}
	buffer[buff_index++] = c;

	return (buff_index);
}
