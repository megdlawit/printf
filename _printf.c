#include "main.h"
/**
 * print_format - format controller
 * @format: the base string
 * @valist : hold the argument passed
 * Return: total size of the argument with the total size of the base string
 */
int print_format(const char *format, va_list valist)
{
	unsigned int count = 0;
	int result;
	int i = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			result = formatchecker(format, valist, &i);
			if (result == -1)
			{
				return (-1);
			}
		count += result;
		continue;
		}
	print_out(format[i]);
	count++;
	}
	return (count);
}

/**
 * formatchecker - checks the format and print the character
 * @str: the base string
 * @valist: number of arguments passed
 * @j: address of %
 * Return: total number of printed charcter inside the argument
 */
int formatchecker(const char *str, va_list valist, int *j)
{
	int i;
	int p;
	int formats;

	Data checker[] = {{'c', print_char},
			  {'s', print_string},
			  {'d', print_int},
			  {'i', print_int},
			  {'b', print_binary},
			  {'u', print_unsigned},
			  {'o', print_octal},
			  {'x', print_hex},
			  {'X', print_hex_big},
			  {'S', print_bigS},
			  {'p', print_address},
			  {'R', print_rot13}};
	*j = *j + 1;
	if (str[*j] == '\0')
	{
		return (-1);
	}
	if (str[*j] == '%')
	{
		print_out('%');
		return (1);
	}
	formats = sizeof(checker) / sizeof(checker[0]);
	for (i = 0; i < formats; i++)
	{
		if (str[*j] == checker[i].l)
		{
			p = checker[i].ptr(valist);
			return (p);
		}
	}
	print_out('%'), print_out(str[*j]);
	return (2);
}

/**
 * _printf - prints anything
 * @format: list of argument type passed
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	va_list ag;
	int f;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ag, format);
	f = print_format(format, ag);
	print_out(-1);
	va_end(ag);
	return (f);
}
