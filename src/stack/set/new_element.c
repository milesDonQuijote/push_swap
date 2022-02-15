#include "push_swap.h"

t_stack	*new_element(int index)
{
	t_stack	*elm;

	elm = (t_stack *)malloc(sizeof(t_stack));
	if (!elm)
		return (0);
	elm->index = index;
	elm->steps = 0;
	elm->next = elm;
	elm->prev = elm;
	return (elm);
}
