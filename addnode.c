#include "monty.h"
/**
 * _addnode - add node to the head stack
 * @hdl: head of the stack
 * @n: new_value
*/
void _addnode(stack_t **hdl, int n)
{

	stack_t *new_node, *alt;

	alt = *hdl;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (alt)
		alt->prev = new_node;
	new_node->n = n;
	new_node->next = *hdl;
	new_node->prev = NULL;
	*hdl = new_node;
}
