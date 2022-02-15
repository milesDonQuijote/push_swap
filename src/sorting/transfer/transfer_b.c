#include "push_swap.h"

void	transfer_b(t_stack **a, t_stack **b, size_t size)
{
	size_t	idx;
	size_t	p_idx;
	t_stack	*tmp;

	idx = 3;
	while (idx++ < size)
	{
		tmp = *a;
		p_idx = 0;
		while (tmp->index >= size - 3 && ++p_idx)
			tmp = tmp->next;
		if (p_idx > (size - idx + 4) / 2)
			while (size - idx + 4 > p_idx++)
				rra(a);
		else
			while (p_idx--)
				ra(a);
		pb(a, b);
	}
}
