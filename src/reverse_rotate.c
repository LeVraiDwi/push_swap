#include "push_swap.h"

int	reverse_rotate(int *tab, int l)
{
	int	i;
	int	tmp;

	if (l < 2)
		return (0);
	tmp = tab[l - 1];
	i = l - 1;
	while (i)
	{
		tab[i] = tab[i - 1];
		i--;
	}
	tab [0] = tmp;
	return (1);
}

int	rra(t_pile *pile)
{
	if (!reverse_rotate(pile->a, pile->l))
		return (0);
	write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_pile *pile)
{
	if (!reverse_rotate(pile->b, pile->lb))
		return (0);
	write(1, "rrb\n", 4);
	return (1);
}

int	rrr(t_pile *pile)
{
	if (!reverse_rotate(pile->a, pile->l))
		return (0);
	if (!reverse_rotate(pile->b, pile->lb))
		return (0);
	write(1, "rrr\n", 4);
	return (1);
}
