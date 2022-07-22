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
 * Description: Function that returns a number.
 *
 * @buffer: Space for memory.
 * @ap: Arguments for function.
 * @bf_count: Iterating pointer.
 *
 */

void op_int(char *buffer, va_list ap, int *bf_count)
{
	int args, temp_args, pos, num, start = 1;

	args = temp_args = (int)va_arg(ap, int);

	if (temp_args == 0)
	{
		buffer[*bf_count] = 48;
		(*bf_count)++;
	}
	while (args != 0)
	{
		if (args < 0)
		{
			args *= -1;
			buffer[*bf_count] = 45;
			(*bf_count)++;
		}
		args /= 10;
		(*bf_count)++;
	}
	pos = *bf_count;
	if (temp_args < 0)
	{
		start = 2;
		temp_args *= -1;
	}
	while (pos >= start)
	{
		num = temp_args % 10;
		temp_args /= 10;
		buffer[pos - 1] = num + '0';
		pos--;
	}
}
