#include "push_swap.h"

void	sort(t_stack **a, t_stack **b, size_t size)
{
	int	min;

	transfer_b(a, b, size);
	//ft_putstr_fd("transfer b completed\n", 1);
	sort_triple(a);
	//ft_putstr_fd("triple sorting completed\n", 1);
	transfer_a(a, b, 3);
	//ft_putstr_fd("transfer a completed\n", 1);
	min = get_min(*a, size);
	//ft_putstr_fd("min index: ", 1);
	//ft_putnbr_fd(min, 1);
	//ft_putstr_fd("\n", 1);
	if (min > size / 2)
		while (size - min++)
			rra(a);
	else
		while (min--)
			ra(a);
	//ft_putstr_fd("sorting successfuly\n", 1);
}
