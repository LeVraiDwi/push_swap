#include "push_swap.h"

int	swap(int *tab, int l)
{
	int	i;

		if (l < 2)
			return (0);
	i = tab[0];
	tab[0] = tab[1];
	tab[1] = i;
	return (1);
}

int sa(t_pile *pile)
{
	if (!swap(pile->a, pile->l))
		return (0);
	write (1, "sa\n", 3);
	return (1);
}

int sb(t_pile *pile)
{
	if (!swap(pile->b, pile->lb))
		return (0);
	write (1, "sb\n", 3);
	return (1);
}
