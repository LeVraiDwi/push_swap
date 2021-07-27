#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pile	pile;
	int		i;

	i = 0;
	if (!ft_is_list(argc, argv, &pile))
		return (0);
	while (i < argc - 1)
	{
		printf("%f\n", pile.a[i]);
		i++;
	}
	free(pile.a);
	free(pile.b);
	return (1);	
}
