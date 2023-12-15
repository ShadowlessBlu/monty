#include "monty.h"
/**
 * _pint - prints the top of the stack
 * @hdl: stack head
 * @linum: line_number
*/
void _pint(stack_t **hdl, unsigned int linum)
{
	if (*hdl == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*hdl);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hdl)->n);
}
