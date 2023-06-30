#include "main.h"
/**
 * _printf - function that produce output according to a format.
 * @format: format parameter to check.
 * @...: list of user_input.
 * Return: return number of characters written
 */
int _printf(const char *format, ...)
{
	int count = 0, value = 0,  buff_index = 0;
	char buffer[1024];

	va_list user_input;

	va_start(user_input, format);


	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			buffer[buff_index++] = *format;
			if (buff_index >= 1023)
			{
				write(1, buffer, buff_index);
				buff_index = 0;
			}
			count++;
		}
		else
		{
			value = print_with_format(format + 1, user_input, buffer, buff_index);
			if (value == -1)
				return -1;				
			count += value;
			format++;
		}
		format++;
	}
	write(1, buffer, buff_index);
	va_end(user_input);
	return (count);
}
