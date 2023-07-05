#include "main.h"
/**
 * print_with_format - function that returns a function
 * based on format
 * @format: format specifier
 * @user: list of arguments
 * Return: return funtion to be printed
 */
int print_with_format(const char *format, va_list user)
{
	int i = 0, count = 0;

	fm_t fm_types[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percentage}, {'d', print_int},
		{'i', print_int}, {'b', print_binary},
		{'\0', NULL}
	};

	if (*format == '\0')
		return (-1);

	for (i = 0; fm_types[i].fm != '\0'; i++)
	{
		if (fm_types[i].fm == *format)
			count += (fm_types[i].fn(user));
		}

	return (count);
}
