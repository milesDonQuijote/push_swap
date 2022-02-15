#include "push_swap.h"

t_stack	*get_atindex(t_stack *stack, int index)
{
	while (index--)
		stack = stack->next;
	return (stack);
}
