#include "main.h"

/**
 * _printf - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: the number of characters printed (excluding the null byte used to
 * end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j, len = 0, len_ap = 0;
	print_t funcs[] = {{"c", print_char}, {"s", print_string},
		{"d", print_integer}, {"i", print_integer}, {"b", print_binary},
		{"o", print_octa}, {"x", print_hexa}, {"X", print_HEXA}, {NULL, NULL}};

	va_start(ap, format);

	if (format == NULL)
		return (-1);

	while (format && (*(format + i)))
	{
		j = 0;

		if ((*(format + i) != '%' && *(format + i - 1) != '%') ||
			(*(format + i) == '%' && *(format + i - 1) == '%') ||
			(*(format + i) != '%' && (*(format + i - 1) == '%' &&
			*(format + i - 2) == '%')))
		{
			_putchar(*(format + i));
			len++;
		}

		if (*(format + i) == '%')
		{
			while (j < 8 && (*(format + i + 1) != *(funcs[j].c)))
				j++;

			if (j < 8 && *(format + i + 1) != '\0')
				len_ap += funcs[j].fp(&ap);
		}
		i++;
	}
	if (i <= 0)
		return (0);

	return (len + len_ap);
	va_end(ap);
}
