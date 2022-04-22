#include "main.h"
/**
 * print_address - print the addres of input in hexa format
 * @valist: va_list argument of _printf function
 * Return: number of character printed
 */
int print_address(va_list valist)
{
	char *str;
	unsigned long int p;

	register int count;

	count = 0;
	p = va_arg(valist, unsigned long int);
	if (!p)
		return (_puts("(nil)"));
	str = itoa(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
