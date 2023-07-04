#include "main.h"
/**
 * _printf - function that prints a string
 * @format: format specifier
 * @...: other argument passed
 * Return: returns number of characters written
 */
int _printf(const char *format, ...)
{
	int i, count = 0, value = 0;
	va_list user;

	va_start(user, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			value = print_with_format(&format[i], user);
			if (value == -1)
				return (-1);
			count = count + value;
		}
	}
		va_end(user);

	return (count);
}
