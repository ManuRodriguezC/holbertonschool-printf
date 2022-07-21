#include "main.h"

/**
 * get_op_functions - Function that returns an option.
 *
 * @c: compare a character for function.
 *
 * Return: if c = NULL returns a NULL, if c = char returns option.
 *
 */


int (*get_op_functions(char c))(char *, va_list, int *)
{
	functions ops[] = {
			{"c", op_char},
			{"s", op_string},
			{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != '\0')
		if (*ops[i].op == c)
			return (ops[i].f);
		i++;
	return (NULL);
}
