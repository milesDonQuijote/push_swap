#include "push_swap.h"

int	issorted(t_stack *stack)
{
	size_t	len;
	int	prev;

	len = stack_len(stack) - 1;
	prev = stack->index;
	stack = stack->next;
	while (len--)
	{
		if (stack->index < prev)
			return (0);
		prev = stack->index;
		stack = stack->next;
	}
	return (1);
}
