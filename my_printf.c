#include "main.h"
/**
 * _printf - function that produce output according to a format.
 * @format: format parameter to check.
 * @...: list of user_input.
 * Return: return number of characters written
 */
int _printf(const char *format, ...)
{
	int count = 0, value = 0;
	va_list user_input;

	va_start(user_input, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'c')
			{
				_putchar(va_arg(user_input, int));
				count++;
			}
			else if (*format == 's')
			{
				value =my_print(va_arg(user_input, char *));
				count = count + value;
			}
		}
		format++;
	}
		va_end(user_input);
		return (count);
}
