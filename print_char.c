#include "main.h"

/**
 * print_char - prints a char
 * @ap: a list of arguments pointing to the character to be printed
 *
 * Return: 1
 */

int print_char(va_list *ap)
{
	_putchar(va_arg(*ap, int));
	return (1);
}

