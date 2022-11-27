#include "main.h"

void print_number(int n, int *ct);

/**
 * print_integer - prints an int
 * @ap: a list of arguments pointing to the integer to be printed
 *
 * Return: total bytes of the integer
 */

int print_integer(va_list *ap)
{
	int len = 1;

	print_number(va_arg(*ap, int), &len);

	return (len);
}



/**
  * print_number - prints an int via _putchar
  * @n: input int
  * @c: bytes of the number
  */

void print_number(int n, int *c)
{
	unsigned int m;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		*c = *c + 1;
	}

	m = n;

	if (m / 10)
	{
		*c = *c + 1;
		print_number(m / 10, c);
	}

	_putchar((m % 10) + '0');
}
