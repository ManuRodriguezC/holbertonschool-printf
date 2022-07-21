#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>



/* Prototypes */
int _printf(const char *format, ...);
void op_string(char *buffer, va_list ap, int *bf_count);
void op_char(char *buffer, va_list ap, int*bf_count);
int (*get_op_functions(char c))(char *, va_list, int *);

/* Structure */
typedef struct functions
{
	char *op;
	void (*f)(char *, va_list, int *);

} functions;


#endif
