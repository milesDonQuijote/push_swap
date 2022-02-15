#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = 0;
	stack_a = parser(++argv, --argc);
	if (!issorted(stack_a))
		sort(&stack_a, &stack_b, argc);
	/*for (int i = 0; i < argc; i++)
	{
		printf("%i ", stack_a->index);
		stack_a = stack_a->next;
	}*/
	return (0);
}
