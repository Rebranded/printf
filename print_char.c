#include "main.h"
/**
 * print_char - function that prints characters
 * @user: arguements
 * Return: returns number of characters written
 */
int print_char(va_list user)
{
	char c = va_arg(user, int);

	return (write(1, &c, 1));
}
