#include "push_swap.h"

int	norepeat(char *arg, char **argv, int size)
{
	while (size && (ft_strlen(arg) != ft_strlen(argv[size - 1]) ||
			ft_strncmp(arg, argv[size - 1], ft_strlen(arg))))
		size--;
	return (!size);
}
