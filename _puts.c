#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string to print
 * Return: number of chars
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		print_out(str[i]);
	return (i);
}
