#include "main.h"
/**
 * _putchar - function that writes character to the stdout.
 * @c: character to be written
 * Return: return 1 if true or -1 if otherwise.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
