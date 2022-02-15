#include "push_swap.h"

t_stack	*indexation(int *array, int size)
{
	int	index;
	int	jndex;
	t_stack	*stack;

	index = 0;
	stack = 0;
	while (size--)
	{
		jndex = 0;
		stack_addback(&stack, jndex);
		while (index - jndex++)
		{
			if (array[index - jndex] > array[index])
				get_atindex(stack, index - jndex)->index++;
			else
				(get_atindex(stack, index)->index)++;
		}
		index++;
	}
	return (stack);
}
