#include "push_swap.h"

int	push(int *from, int *to, int lf, int lt)
{
	int	i;

	i = lt - 1;
	if (lf == 0)
		return (0);
	while (i >= 0)
	{
		to[i + 1] = to[i];
		i--;
	}
	to[0] = from[0];
	i = 0;
	while (i < lf - 1)
	{
		from[i] = from[i + 1];
		i++;
	}
	return (1);
}

int	pa(t_pile *pile)
{
	if (!push(pile->b, pile->a, pile->lb, pile->l))
		return (0);
	pile->lb--;
	pile->l++;
	write(1, "pa\n", 3);
	return (1);
}

int	pb(t_pile *pile)
{
	if (!push(pile->a, pile->b, pile->l, pile->lb))
		return (0);
	pile->l--;
	pile->lb++;
	write(1, "pb\n", 3);
	return (1);
}
