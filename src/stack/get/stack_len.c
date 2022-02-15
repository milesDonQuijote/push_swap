#include "push_swap.h"

size_t	stack_len(t_stack *stack)
{
	int	first;
	size_t	len;

	len = !!stack;
	if (!len)
		return (len);
	first = stack->index;
	stack = stack->next;
	while (stack->index != first)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}
