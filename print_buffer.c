#include "main.h"
/**
 * print_buffer - prints the array content of a buffer
 * @buffer: buffer array
 * @buff_index: index
 *
 */
void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
	{
		write(1, &buffer, *buff_index);
	}

	*buff_index = 0;
}
