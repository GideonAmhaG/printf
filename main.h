#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/*
 * File : main.h
 * Functions and structs
 */

/**
 * struct print - struct print
 * @c: character representing data type
 * @fp: a fuction pointer to a function to print a certain data type
 */

typedef struct print
{
	char *c;
	int (*fp)(va_list *ap);
} print_t;

int _putchar(char c);
int print_char(va_list *ap);
int print_binary(va_list *ap)
int print_string(va_list *ap);
int print_integer(va_list *ap);
int _printf(const char *format, ...);

#endif /* #ifndef MAIN_H */
