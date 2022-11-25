#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

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
	printf("%d\n", len);
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
int print_binary(va_list *ap);
{
	char *str;
	int i;

	str = convert_binary(va_arg(*ap, int));

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
	
