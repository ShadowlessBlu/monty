#include "monty.h"
/**
  *_sub- sustration
  *@hdl: stack head
  *@linum: line_number
 */
void _sub(stack_t **hdl, unsigned int linum)
{
	stack_t *alt;
	int len = 0, sht;

	alt = *hdl;
	for (sht = 0; alt != NULL; sht++)
		alt = alt->next;
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*hdl);
		exit(EXIT_FAILURE);
	}
	alt = *hdl;
	sht = alt->next->n - alt->n;
	alt->next->n = sht;
	*hdl = alt->next;
	free(alt);
}
