#include "main.h"
/**
 * print_rot13 - print a string using rot13
 * @valist: va_list argumnets of _printf function
 * Return: number of character printed
 */
int print_rot13(va_list valist)
{
	int j, i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(valist, char *);

	if (str == NULL)
	{
		return (_puts("(nil)"));
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z'))
		{
			print_out(str[i]);
		}
		else
		{
			for (j = 0; j < 52; j++)
			{
				if (str[i] == rot13[j])
				{
					print_out(ROT13[j]);
				}
			}
		}
	}
	return (j);
}
