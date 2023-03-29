#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int print_number(int n);
int print_binary(unsigned int i);
void convert_to_bin(unsigned int i);
int format_output(const char *format, va_list args);
int print_reverse(char *s);
int print_rot13(char *s);

#endif
