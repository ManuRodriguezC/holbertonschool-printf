#include "main.h"

/**
 *op_string - function that will print a string
 *@buffer: 
 *
 *
 */
void op_string(char *buffer, va_list ap, int *bf_count)
{
int i;
char *ch = NULL;

ch = va_arg(ap, char *);
if (!ch)
	ch = "(null)";

for (i = 0; ch[i] != '\0'; i++)
{
	buffer[*bf_count] = ch[i];
	(*bf_count)++;
}
}


/**
 *
 *
 *
 */
void op_char(char *buffer, va_list ap, int*bf_count)
{
char c;

c = (char)va_arg(ap, int);

buffer[*bf_count] = c;
(*bf_count)++;
}
