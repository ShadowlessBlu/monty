#include "monty.h"
/**
 * _pop - prints the top of the stack
 * @hdl: stack head
 * @linum: line_number
*/
void _pop(stack_t **hdl, unsigned int linum)
{
	stack_t *alt;

	if (*hdl == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*hdl);
		exit(EXIT_FAILURE);
	}
	alt = *hdl;
	*hdl = alt->next;
	free(alt);
}
