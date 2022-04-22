#include "main.h"

/**
 * print_string - print string
 * @valist: it holds the arguments
 * Return: The total number of character
 */

int print_string(va_list valist)
{

unsigned int count;
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		print_out(str[count]);
	}
	return (count);
}
