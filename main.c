#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2, len3, len4;

   len =  _printf("%b\n", 1000);
    //printf("%b\n", 1000);
   len2 = _printf("%o\n", 1000);

    printf("%o\n", 1000);
   len3 =  _printf("%x\n", 1000);
    printf("%x\n", 1000);
    len4 = _printf("%X\n", 1000);
    printf("%X\n", 1000);

    printf("binary len %d\n", len);
    printf("octal len %d\n", len2);
    printf("hexa len %d\n", len3);
    printf("HEXA len %d\n", len4);
    return (0);
}
