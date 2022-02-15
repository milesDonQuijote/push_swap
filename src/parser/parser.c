#include "push_swap.h"

t_stack	*parser(char **argv, int size)
{
	int	*converted;
	t_stack	*parsed;

	if (!isvalid(argv, size))
		return (0);
	converted = convert(argv, &size);
	parsed = indexation(converted, size);
	free(converted);
	return (parsed);
}
