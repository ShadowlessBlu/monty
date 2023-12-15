#include "monty.h"

/**
 * _addqueue - adds a new node to the rear of the queue
 * @n: new value to be added
 * @hdl: ptr to the head of the queue
*/
void _addqueue(stack_t **hdl, int n)
{
	stack_t *new_node, *rep;

	rep = *hdl;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (rep)
	{
		while (rep->next)
			rep = rep->next;
	}
	if (!rep)
	{
		*hdl = new_node;
		new_node->prev = NULL;
	}
	else
	{
		rep->next = new_node;
		new_node->prev = rep;
	}
}
