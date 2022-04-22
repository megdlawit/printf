#include "main.h"

/**
 * print_binary - print a number in base 2
 * @valist: va_list argument from _printf() function
 * Return: the number of character printed
 */
int print_binary(va_list valist)
{
	unsigned int num;
	char *str;

	num = va_arg(valist, unsigned int);
	str = itoa(num, 2, 0);
	return (_puts(str));
}

/**
 * print_unsigned - print unsigned integer
 * @l: va_list of argument from _printf function
 * Return: Number of characters are printed
 */

int print_unsigned (va_list l)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = itoa(u, 10, 0);

	return (_puts(str));
}

/**
 * print_octal - print octa decimal
 * @l: va_list of argument
 * Return: number of character are printed
 */

int print_octal(va_list l)
{

	unsigned int num = va_arg(l, unsigned int);
	char *str = itoa(num, 8, 0);
	int count = 0;

	count += _puts(str);
	return (count);

}

/**
 * print_hex - prints a number in hexadecimal base,
 * in lowercase
 * @l: va_list argumnets for _printf function
 * Return: the number of character printed
 */

int print_hex(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = itoa(num, 16, 1);
	int count  = 0;

	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number in hexadecimal base
 * in uppercase
 * @l: va_list arguments fro _printf function
 * Return: the number of char printed
 */



int print_hex_big(va_list l)

{
	unsigned int num = va_arg(l, unsigned int);
	char *str = itoa(num, 16, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}
