#include "main.h"

/**
 * print_out - print a character
 * @c: hold a character
 * Return: 1
 */
int print_out(char c)
{
	return (buffer(c));
}

/**
 * buffer - save the character to the buffer
 * @c: character
 * Return: 1
 */

int buffer(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != -1)
		buffer[i++] = c;
	return (1);
}
