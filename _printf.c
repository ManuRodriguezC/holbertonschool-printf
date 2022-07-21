#include "main.h"
/**
 * _printf - Entru point.
 * Description: Funtion that prints string format.
 *
 * @format: arguments function
 * Return: print_len
 */

int _printf(const char *format, ...)
{
	int i = 0, bf_count = 0;
	char *buffer = NULL;
	void (*op_functions)(char *, va_list, int *);
	va_list ap;

	va_start(ap, format), buffer = malloc(sizeof(char) * 1024);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				continue;

			op_functions = get_op_functions(format[i + 1]);
			if (op_functions == NULL)
			{
				buffer[bf_count] = format[i];

				if (format[i + 1] != '%')
				{
					buffer[bf_count + 1] = format[i + 1];
					bf_count += 2;
				}
				else
					bf_count++;
			}
			else
				op_functions(buffer, ap, &bf_count);
			i++;
			continue;
		}
		buffer[bf_count] = format[i];
		bf_count += 1;
		i++;
	}
	write(1, buffer, bf_count);
	va_end(ap);
	free(buffer);
	return (bf_count);
}
