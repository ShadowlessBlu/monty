#include "monty.h"
/**
 * _pall - prints the stack
 * @head: stack head
 * @linum: line num where opcode is found (unused)
*/
void _pall(stack_t **head, unsigned int linum)
{
	stack_t *alt;
	(void)linum;

	alt = *head;
	if (alt == NULL)
		return;
	while (alt)
	{
		printf("%d\n", alt->n);
		alt = alt->next;
	}
}
