#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the struct stack
 * @line_number: the line counter of the stack
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int c = 0;

	(void)line_number;
	while (tmp)
	{
		c = tmp->n;
		if (c == 0 || _isalpha(c) == 0)
			break;
		putchar(c);
		tmp = tmp->next;
	}
	putchar('\n');
}
