#include "main.h"
/**
 * print_percentage - function that prints percentage sign
 * @user_input: list of argument passed by user
 * Return: return written % signe
 *
 */
int print_percentage(va_list user_input)
{
	UNUSED(user_input);

	return (write(1, "%%", 1));
}
