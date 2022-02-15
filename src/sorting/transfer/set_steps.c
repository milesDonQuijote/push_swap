#include "push_swap.h"

void	set_steps(t_stack *a, t_stack *b, size_t size)
{
	size_t	idx;
	size_t	b_size;

	idx = 0;
	b_size = stack_len(b);
	while (idx++ < b_size)
	{
		b->steps = get_ground(a, b->index, size);
		/*ft_putstr_fd("getted ground: ", 1);
		ft_putnbr_fd(b->steps, 1);
		ft_putstr_fd("\n", 1);
		*/
		if (b->steps > size / 2)
			b->steps = size - b->steps;
		b = b->next;
	}
}
