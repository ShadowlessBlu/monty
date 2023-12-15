#include "monty.h"
/**
  *_sub- sustration
  *@hd1: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **hd1, unsigned int linum)
{
	stack_t *aux;
	int sus, nodes;

	aux = *hd1;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", linum);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd1);
		exit(EXIT_FAILURE);
	}
	aux = *hd1;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*hd1 = aux->next;
	free(aux);
}
