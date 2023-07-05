#include "main.h"
/**
 * print_unsigned - function that handle format specifier u
 * @user: argunment to print
 * Return: return number of characters printed
 *
 */
int print_unsigned(va_list user)
{
	unsigned int num, divisor = 1, digit = 0;
	int count = 0;
	unsigned int n = va_arg(user, unsigned int);

	num = n;

	while (num / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = num / divisor;
		num %= 10;
		divisor /= 10;
		_putchar('0' + digit);
		count++;
	}
	return (count);
}
