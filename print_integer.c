#include "main.h"
void print_number(int n);

/**
 * print_integer - prints an int
 * @ap: a list of arguments pointing to the integer to be printed
 *
 * Return: total bytes of the integer
 */

int print_integer(va_list *ap)
{
	print_number(va_arg(*ap, int));

	return (0);
}



/**
  * print_number - prints an int via _putchar
  * @n: input int
  */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
