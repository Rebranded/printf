#include "main.h"
/**
 * print_int - function that prints an integer
 * @user: argumets
 * Return: return the number of characters printed
 *
 */
int print_int(va_list user)
{
	int reversed = 0, digit = 0, count = 0;
	int my_digit = 0;
	int num = va_arg(user, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	while (num > 0)
	{
		my_digit = num % 10;
		reversed = reversed * 10 + my_digit;
		num /= 10;
	}
	while (reversed > 0)
	{
		digit = reversed % 10;
		_putchar (digit + '0');
		count++;
		reversed /= 10;
	}
	return (count);
}
