#ifndef FUNCTION_POINTERS_FILE
#define FUNCTION_POINTERS_FILE
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list va);
void _printstr(va_list va);
void _printfloat(va_list va);
void _printint(va_list va);

/**
 * struct def - structure to check
 *
 * @letter : the letter
 * @func : the function call
 */

typedef struct def
{
	char *letter;
	void (*func)(va_list printall);
} arr;

#endif
