#include "main.h"

/**
 * itoa - convert integer to ascii
 * @num: num
 * @base: base
 * @lowercase: flag if hexa value need to be lowercase
 * Return: a string
 */
char *itoa(long int num, int base, int lowercase)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	array = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

