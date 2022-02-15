#include "push_swap.h"

t_stack	*new_stack(int	*index_array, size_t size)
{
	t_stack	*stack;

	stack = 0;
	while (size--)
		stack_addback(&stack, *index_array++);
	return (stack);
}
