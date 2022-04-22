#include "main.h"

/**
 * print_int - Print a number in base 10
 * @valist: Number to print in base 10
 *
 * Return: Length of th numbers in decimal
 **/
int print_int(va_list valist)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(valist, int), 10, 0);

	size = _puts((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
