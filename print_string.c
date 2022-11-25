#include "main.h"

/**
 * print_string - prints a string
 * @ap: a list of arguments pointing to the string to be printed
 *
 * Return: length of the string
 */

int print_string(va_list *ap)
{
	char *s;
	char *null = "(null)";
	int len = 0;

	s = va_arg(*ap, char *);

	if (s == NULL)
	{
		while (*null)
		{
			_putchar(*null);
			null++;
		}
		return (0);
	}

	while (*s)
	{
		_putchar(*s);
		s++;
		len++;
	}

	return (len);
}
