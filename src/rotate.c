#include "push_swap.h"

int	rotate(int *tab, int l)
{
	int	i;
	int	tmp;
	
	if (l < 2)
		return (0);
	tmp = tab[0];
	i = 0;
	while (i < l - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[l - 1] = tmp;
	return (1);
}

int	ra(t_pile *pile)
{
	if (!rotate(pile->a, pile->l))
		return (0);
	write(1, "ra\n", 3);
	return (1);
}

int	rb(t_pile *pile)
{
	if (!rotate(pile->b, pile->lb))
		return (0);
	write(1, "rb\n", 3);
	return (1);
}

int	rr(t_pile *pile)
{
	if (!rotate(pile->a, pile->l))
		return (0);
	if (!rotate(pile->b, pile->lb))
		return (0);
	write(1, "rr\n", 3);
	return (1);
}
