#include "main.h"
/**
 * print_char - function that prints characters
 * @user: arguements
 * Return: returns number of characters written
 */
int print_char(va_list user)
{
	int c = va_arg(user, int);

	_putchar(c);

	return (1);
}
