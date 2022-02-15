#include "push_swap.h"

int	*convert(char **argv, int *size)
{
	int	index;
	int	*converted;

	index = 0;
	while (index < *size)
		if (!argv[index++][0])
			(*size)--;
	index = 0;
	converted = (int *)malloc(sizeof(int) * *size);
	while (index < *size)
	{
		if (!**argv && argv++)
			continue ;
		converted[index++] = ft_atoi(*argv++);
	}
	return (converted);
}
