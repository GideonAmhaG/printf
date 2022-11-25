#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert_binary - converts an int to a binary
 * @n: is an integer to be converted to binary
 *
 * Return: pointer to a string containing the binary
 * as a string
 */
char *convert_binary(int n)
{
	int rem, i;
	int len = 0;
	int  m;
	char *str;

	m = n;
	while (n != 0)
	{
		len++;
		n = n / 2;
	}
	str = malloc(sizeof(char) * (len + 1));

	for (i = 0; m != 0; i++)
	{
		rem = m % 2;
		m = m / 2;
		str[(len - 1) - i] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}

/**
 * print_binary - prints an int as a binary
 * @ap: is a pointer to an int
 *
 * Return: number of characters printed
 */
int print_binary(va_list *ap)
{
	char *str;
	int i;

	str = convert_binary(va_arg(*ap, int));

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i + 1);
}
