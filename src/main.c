#include "push_swap.h"

int	ft_error(t_pile *pile)
{
	if (pile->a != 0)
		free(pile->a);
	if (pile->b != 0)
		free(pile->b);
	write (1, "error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	t_pile	pile;
	int		i;

	i = 0;
	pile.a = 0;
	pile.b = 0;
	pile.lb = 0;
	if (argc > 1)
		pile.l = argc - 1;
	else
		return (ft_error(&pile));
	if (!ft_is_list(argc, argv, &pile))
		return (ft_error(&pile));
	while (i < argc - 1)
	{
		printf("%d\n", pile.a[i]);
		i++;
	}
	ft_sort_tab(pile.a, 0, pile.l - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", pile.a[i]);
		i++;
	}
	free(pile.a);
	free(pile.b);
	return (1);	
}
