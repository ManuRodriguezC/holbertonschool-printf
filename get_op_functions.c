#include "main.h"

/**
 * get_op_functions - Function that returns an option.
 *
 * @c: compare a character for function.
 *
 * Return: if c = NULL returns a NULL, if c = char returns option.
 *
 */


void (*get_op_functions(char c))(char *, va_list, int *)
{
	int i = 0;
	functions ops[] = {
			{"c", op_char},
			{"s", op_string},
			{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == c)
			return (ops[i].f);
	}
	i++;
	return (NULL);
}
