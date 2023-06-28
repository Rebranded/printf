#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that produce output according to a format.
 * @format: format parameter to check.
 * @...: list of user_input.
 * Return: return number of characters written
 */
int _printf(const char *format, ...)
{
	int b = 0;
	int value = 0;
	int value1 = 0;

	va_list user_input;

	va_start(user_input, format);

	while (format && format[b])
	{
		if (format[b] != '%')
		{
			_putchar(format[b]);
		}
		else if (format[b + 1] == 'c')
		{
			_putchar(va_arg(user_input, int));
			b++;
		}
		else if (format[b + 1] == 's')
		{
			value1 = my_puts(va_arg(user_input, char *));
			value = value + (value1 - 1);
			b++;
		}
		value += 1;
		b++;
		va_end(user_input);
	}

	return (value);
}
