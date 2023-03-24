#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
	 * print_numbers - Prints strings, followed by a new line.
	 * @separator: The string to be printed between strings.
	 * @n: The number of strings passed to the function.
	 * @...: A variable number of strings to be printed
	 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;


va_start(ap, n);

for (i = 0; i < n; i++)

{
	printf("%d", va_arg(ap, int));
	if (separator != NULL && i != (n - 1))
	printf("%s", separator);
}


printf("\n");
va_end(ap);
}
