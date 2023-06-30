#include "main.h"
/**
 * print_with_format - function that initialize a struct
 * @format: format to be printed
 * @user_input: va_list
 * @buffer: buffer to store local variable
 * @buff_index: buffer index
 * Return: return count
 */
int print_with_format(const char *format, va_list user_input,
char *buffer, int buff_index)
{
	int i, count = 0;

	formathandler fmt[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percentage},
		{'d', print_int}, {'i', print_int}, {'\0', NULL}
	};


	for  (i = 0;  fmt[i].specifier != '\0';  i++)
	{
		if (fmt[i].specifier == *format)
		{
			buff_index = fmt[i].print_func(user_input, buffer, buff_index);
			count += buff_index;
			break;
		}
	}

	return (count);
}

