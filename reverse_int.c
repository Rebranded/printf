#include "main.h"
/**
 * reverse_int - function that prints reversed int
 * @num: number to be passed
 * Return
 */
int reverse_int(int num)
{
	int digit = 0, reversed = 0;

	while (num > 0)
	{
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	return (reversed);
}
