#include "main.h"
/**
 * Authors: Esteban Rodriguez - Marlon Amado - 2022
 *
 * _printf - Entry point
 * Description: Function that prints input to output
 * @format: Check format
 * Return: len
 */

int _printf(const char *format, ...)
{
	int i = 0;
	size_t print_len = 0;
	char buffer[2048];

	va_list ap;
	va_start(ap, format);
	while (format && format[i])
	{
		buffer[print_len] = format[i];
		print_len += 1;
		i++;
	}
	write(1, buffer, print_len);
	va_end(ap);
	//return (count);
}
