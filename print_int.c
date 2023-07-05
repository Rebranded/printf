#include "main.h"
/**
 * print_int - function that prints an integer
 * @user: argumets
 * Return: return the number of characters printed
 *
 */
int print_int(va_list user)
{
	char buffer[12];
	int index = 0, count = 0;

	int n = va_arg(user, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n == INT_MIN)
	{
		buffer[index++] = '8';
		n /= 10;
		count++;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	while (n > 0)
	{
		buffer[index++] = '0' + (n % 10);
		n /= 10;
	}
	while (index > 0)
	{
		_putchar(buffer[--index]);
		count++;
	}
	if (count > 0 && buffer[0] == '8')
		count--;

	return (count);
}
