#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert_hexa - converts an int to a hexadecimal
 * @n: is an integer to be converted to hexa
 *
 * Return: pointer to a string containing the hexa
 * as a string
 */
char *convert_hexa(int n)
{
	int rem, i;
	int len = 0;
	char letter;
	int  m;
	char *str;

	m = n;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	str = malloc(sizeof(char) * (len + 1));

	for (i = (len - 1); m != 0; i--)
	{
		rem = m % 16;
		m = m / 16;
		if (rem > 9)
		{
			if (rem == 10)
				letter = 'a';
			else if (rem == 11)
				letter = 'b';
			else if (rem == 12)
				letter = 'c';
			else if (rem == 13)
				letter = 'd';
			else if (rem == 14)
				letter = 'e';
			else if (rem == 15)
				letter = 'f';
			str[i] = letter;
		}
		else
			str[i] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}

/**
 * print_hexa - prints an int as a hexa
 * @ap: is a pointer to an int
 *
 * Return: number of characters printed
 */
int print_hexa(va_list *ap)
{
	char *str;
	int i;

	str = convert_hexa(va_arg(*ap, int));

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i - 1);
}
