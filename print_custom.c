#include "main.h"

/**
 * print_bigS - Non visible characters
 * (0 < ASCII value < 32 or >= 127)
 * printed this way: \x, folowed by the ASCII code
 * @l: va_list arguments for _printf
 * Return: number of char printed
 */

int print_bigS(va_list l)
{
	int i, count = 0;
	char *s = va_arg(l, char *);
	char *res;

	if (s == NULL)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			print_out('\\');
			print_out('x');
			count += 2;
			res = itoa(s[i], 16, 0);
			if (!res[1])
				count += print_out(48);
			count += _puts(res);
		}
		else
			count += print_out(s[i]);
	}
	return (count);
}
