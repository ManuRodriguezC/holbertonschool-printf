#include "main.h"

/**
 *
 *
 *
 */
int (*get_op_functions(char c))
{
	funtions_ ops[] = {
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
