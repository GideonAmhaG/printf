#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * convert_HEXA - converts an int to a HEXA (capital)
 * @n: is an integer to be converted to HEXA
 *
 * Return: pointer to a string containing the HEXAy
 * as a string
 */
char *convert_HEXA(int n)
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
				letter = 'A';
			else if (rem == 11)
				letter = 'B';
			else if (rem == 12)
				letter = 'C';
			else if (rem == 13)
				letter = 'D';
			else if (rem == 14)
				letter = 'E';
			else if (rem == 15)
				letter = 'F';
			str[i] = letter;
		}
		else
			str[i] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}

/**
 * print_HEXA - prints an int as a HEXA (capital)
 * @ap: is a pointer to an int
 *
 * Return: number of characters printed
 */
int print_HEXA(va_list *ap)
{
	char *str;
	int i;

	str = convert_HEXA(va_arg(*ap, int));

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i - 1);
}
