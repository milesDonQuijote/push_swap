#include "push_swap.h"

int	get_ground(t_stack *stack, int n, size_t size)
{
	int	idx;
	int	ground;
	int	gr_idx;

	idx = 0;
	gr_idx = -1;
	ground = get_atindex(stack, get_max(stack, size))->index + 1;
	while (idx++ < size)
	{
		if (stack->index > n && stack->index < ground)
		{
			gr_idx = idx - 1;
			ground = stack->index;
		}
		stack = stack->next;
	}
	if (gr_idx == -1)
	{
		ground = get_min(stack, size);
		while (++gr_idx && stack->index != ground)
			stack = stack->next;
	}
	return (gr_idx);
}
