#include "push_swap.h"

void	ft_three(t_pile *pile)
{
	if (pile->b[0] < pile->b[1])
		sb(pile);
	pa(pile);
	rra(pile);
	pa(pile);
	rra(pile);
	rra(pile);
}
