#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert_octa - converts an int to octa
 * @n: is an integer to be converted to binary
 *
 * Return: pointer to a string containing the octa
 * as a string
 */
char *convert_octa(int n)
{
	int rem, i;
	int len = 0;
	int  m;
	char *str;

	m = n;
	while (n != 0)
	{
		len++;
		n = n / 8;
	}
	str = malloc(sizeof(char) * (len + 1));

	for (i = 0; m != 0; i++)
	{
		rem = m % 8;
		m = m / 8;
		str[(len - 1) - i] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}

/**
 * print_octa - prints an int as octa
 * @ap: is a pointer to an int
 *
 * Return: number of characters printed
 */
int print_octa(va_list *ap)
{
	char *str;
	int i;

	str = convert_octa(va_arg(*ap, int));

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i - 1);
}
