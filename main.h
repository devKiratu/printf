#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct ops - groups format specifier and function that implements it
 * @type: specifier type e.g c, i, d, etc
 * @printer: function that prints according to @type format
 */
typedef struct ops
{
	char type;
	int (*printer)(va_list);
} print_ops;

int print_char(va_list);
int print_str(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reverse(va_list);
int print_rot13(va_list);
int print_mod(va_list);
int print_non_printables(va_list);
int replace_with_hex(char);
void format_hex(unsigned int);
int print_unsigned_int(va_list args);
int print_upper_hex(va_list args);
int print_lower_hex(va_list args);
void convert_to_hex(unsigned int i, char fmt);
int print_octal(va_list args);
void convert_to_octal(unsigned int i);
int print_address(va_list);
void format_address(unsigned long int);

int _putchar(char c);
int _printf(const char *format, ...);
void convert_to_bin(unsigned int i);
int format_output(const char *format, va_list args);

#endif
