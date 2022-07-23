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
	int args, temp_args, temp_num, num = 0, digits[15];

	args = temp_args = (int)va_arg(ap, int);

	if (args == 0)
	{
		buffer[*bf_count] = 48;
		(*bf_count)++;
	}
	if (args > 0)
	{
		while (args != 0)
		{
			temp_args = args % 10;
			args /= 10;
			digits[num] = temp_args;
			num++;
		}
	}
	else if (args < 0)
	{
		buffer[*bf_count] = '-';
		(*bf_count)++;
		while (args != 0)
		{
			temp_num = args % 10 * -1;
			digits[num] = temp_num;
			args /= 10;
			num++;
		}
	}
	num--;
	while (num >= 0)
	{
		buffer[*bf_count] = digits[num] + '0';
		(*bf_count)++;
		num--;
	}
}

/**
 * op_binary - Function entry point.
 *
 * Description: Function that return a binary number.
 *
 * @buffer: Space for memory.
 * @ap: Arguments for funtion.
 * @bf_count: iterating pointer.
 */

void op_binary(char *buffer, va_list ap, int *bf_count)
{
	int args, bin = 0, i = 0, digits[100];

	args = (int)va_arg(ap, int);

	if (args == 0)
	{
		buffer[*bf_count] = 48;
		(*bf_count)++;
	}

	while (args)
	{
		bin = args % 2;
		args /= 2;
		digits[i] = bin;
		i++;
	}
	i--;
	while (i >= 0)
	{
		buffer[*bf_count] = digits[i] + '0';
		(*bf_count)++;
		i--;
	}
}


