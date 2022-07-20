#include "main.h"

/**
 *
 *
 *
 */
int (*get_op_functions(char c))(char *, va_list,int *)
{
	funtions ops[] = {
			{"c", op_char},
			{"s", op_string},
			{NULL, NULL}
	};
	

	while (ops[i].op != '\0')
		if (strcmp(ops[i].op, c) == 0)
			return (ops[i].f)
			i++;
	return (NULL);
}
