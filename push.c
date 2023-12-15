#include "monty.h"
/**
 * _push - adds a node to the stack
 * @head: double pointer to the head of the stack
 * @linum: the line number where the opcode is
*/
void _push(stack_t **head, unsigned int linum)
{
	int n, j = 0, flags = 0;

	if (glob.arg)
	{
		if (glob.arg[0] == '-')
			j++;
		for (; glob.arg[j] != '\0'; j++)
		{
			if (glob.arg[j] > 57 || glob.arg[j] < 48)
				flags = 1;
		}
		if (flags == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", linum);
			fclose(glob.file);
			free(glob.cont);
			_free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", linum);
		fclose(glob.file);
		free(glob.cont);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(glob.arg);
	if (glob.lifi == 0)
		_addnode(head, n);
	else
		_addqueue(head, n);
}
