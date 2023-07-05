#ifndef HEADER_FILE
#define HEADER_FILE
#include <unistd.h>
#include <stdarg.h>
#define UNUSED(x) void(x)
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

/****write functions***/
int _putchar(char c);
int print_with_format(const char *format, va_list user);
int _printf(const char *format, ...);
int print_char(va_list user);
int print_string(va_list user);
int print_percentage(va_list user __attribute__((unused)));
int print_int(va_list user);
int print_binary(va_list user);
int print_unsigned(va_list user);
/**
 * struct print_format - struct operations
 * fm_t - struct operation
 * @fm: character format specifier
 * @fn: function to be returned
 */
typedef struct print_format
{
	char fm;
	int (*fn)(va_list user);
} fm_t;
#endif
