#include "main.h"
/**
 * print_binary - function that prints binary
 * @user: argument passed
 * Return: number of characters written
 *
 */
int print_binary(va_list user)
{
	unsigned int n, m, i, sum = 0;
	unsigned int buff[32];
	char c;
	int count = 0;

	n = va_arg(user, unsigned int);
	m = 2147483648;
	buff[0] = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		buff[i] = (n / m) % 2;
	}
	for (i = 0; i < 32; i++)
	{
		sum += buff[i];
		if (sum || i == 31)
		{
			c = buff[i] + '0';
			_putchar(c);
			count++;
		}
	}

	return (count);
}

