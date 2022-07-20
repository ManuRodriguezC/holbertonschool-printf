#include "main.h"

/**
 *
 *
 *
 */
int (*get_op_functions(char *s))
{
	funtions_ ops[] = {
			{"c", op_char},
			{"s", op_string},
			{NULL, NULL}
	};format_t
	int = 0;

	while (ops[i].op != '\0')
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f)
			i++;
	return (NULL);
}
