#include "monty.h"

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *runner = *stack;


	int aux1 = 0;

	if (!line_number || !stack || !*stack || !(*stack)->next)
		return;

	aux1 = runner->n;

	while (runner->next)
	{
		runner = runner->next;
		runner->prev->n = runner->n;
	}

	runner->n = aux1;
}
