#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - a struct of format
 * @l: format checker
 * @ptr:  a pointer function
 */

typedef struct format
{
	char l;
	int (*ptr)(va_list);
} Data;


/**
 * struct sign - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag fpr the '+' character
 * @space:flag for the ' 'character
 * @hash: flag for the '#' character
 */

typedef struct sign
{
	int plus;
	int space;
	int hash;
} sign_t;

/* format checker*/
int print_format(const char *format, va_list valist);
int formatchecker(const char *str, va_list valist, int *j);

/*print the output to stdout*/
int print_out(char c);
int buffer(char c);

/*print anything*/
int _printf(const char *format, ...);

/*print a character and string*/
int print_char(va_list valist);
int print_string(va_list valist);
int print_rot13(va_list valist);
int _puts(char *str);

/* print integer */
int print_int(va_list valist);
char *itoa(long int num, int base, int lowercase);

/* print base*/
int print_binary(va_list valist);

/* print unsigned integer */
int print_unsigned (va_list l);

/*print octa decimal */
int print_octal(va_list l);

/*print hexadecimal in lowercase*/
int print_hex(va_list l);

/*print hexadecimal in uppercase */
int print_hex_big(va_list l);

/*print non printable characters*/
int print_bigS(va_list l);

/* get_sign - turns on flags if _printf finds */
int get_sign(char s, sign_t *f);

/* print address */
int print_address(va_list valist);

#endif
