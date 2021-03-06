#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
*print_char - prints a char
*@arg: a list of arguments pointing to character to be printed
*
*/
void print_char(va_list arg)
{
	char l;

	l = va_arg(arg, int);
	printf("%c", l);
}
/**
*print_float - prints a float
*@arg: list of arguments pointing to float to be printed
*
*/
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
*print_int - prints an int
*@arg: list of arguments pointing to integer to be printed
*/
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
*print_string - prints a string
*@arg: list of arguments pointing to integer to be printed
*
*/
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
*print_all - prints anything
*@format: string of characters representing arument types
*Descr: any arument not of type char, int, float or char *
*	is ignored
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ",";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
