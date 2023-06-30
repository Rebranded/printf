#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#include <string.h>
/**
 * struct new - structure that take a format and points
 * a function.
 * formathandler - new structure of the same definition
 * @print_func: function to points to per format
 * @specifier: format specifier
 */
typedef struct new
{
	char specifier;
	int (*print_func)(va_list, char *, int buff_index);
} formathandler;

int _printf(const char *format, ...);
int print_string(va_list user_input, char *buffer, int buff_index);
int _putchar(char c);
int print_char(va_list user_input, char *buffer, int buff_index);
int print_int(va_list user_input, char *buffer, int buff_index)
int print_with_format(const char *format, va_list user_input,
char *buffer, int buff_index);
#endif /* user defined header */

