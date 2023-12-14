#include "monty.h"

/**
 * free_stack - clears the memory in stack
 * @stack: double pointer to the struct stack
 */

void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (current)
		{
			free(current);
			current = next;
			if (next)
				next = next->next;
		}
	}
}
