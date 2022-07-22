#include "main.h"

/**
 * op_string - Function entry point.
 *
 * Description: Function that return a string.
 *
 * @buffer: Space for memory.
 * @ap: Arguments for funtion.
 * @bf_count: iterating pointer.
 */

void op_string(char *buffer, va_list ap, int *bf_count)
{
	int i;
	char *ch = NULL;

	ch = va_arg(ap, char *);

	if (ch == NULL)
		ch = "(null)";

	for (i = 0; ch[i] != '\0'; i++)
	{
		buffer[*bf_count] = ch[i];
		(*bf_count)++;
	}
}


/**
 * op_char - Function entry point.
 *
 * Description: Function that returns a character.
 *
 * @buffer: Space for memory.
 * @ap: Arguments for function.
 * @bf_count: Iterating pointer.
 *
 */


void op_char(char *buffer, va_list ap, int *bf_count)
{
	char c;

	c = (char)va_arg(ap, int);
	buffer[*bf_count] = c;
	(*bf_count)++;
}


/**
 * op_int - Function entry point.
 *
 * Description: Function that returns a character.
 *
 * @buffer: Space for memory.
 * @ap: Arguments for function.
 * @bf_count: Iterating pointer.
 */

void op_int(char *buffer, va_list ap, int *bf_count)
{
	int number, quantity, i;
	char *sh = NULL;

	number = va_arg(ap, int);
	quantity = (int)floor(log(number) + 1);
	sh = malloc(sizeof(char) * quantity + 1);

	if (!sh)
		return (0);

	itao(number, sh, 10);

	for (i = 0; sh[i] != '\0'; i++)
	{
		buffer[*bf_count] = sh[i];
		(*bf_count)++;
	}

	free(sh);
}
