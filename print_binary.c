#include "main.h"

void print_base_two(unsigned int n, int *ct);

/**
 * print_binary - prints an int in binary
 * @ap: a list of arguments pointing to the integer to be printed
 *
 * Return: total bytes of the integer in base 2
 */

int print_binary(va_list *ap)
{
	int len = 1;

	print_base_two(va_arg(*ap, unsigned int), &len);

	return (len);
}



/**
 * print_base_two - prints an int via _putchar in binary
 * @n: input int
 * @c: bytes of the number in base 2
 */

void print_base_two(unsigned int n, int *c)
{
	if (n / 2)
	{
		*c = *c + 1;
		print_base_two(n / 2, c);
	}

	_putchar((n % 2) + '0');
}
