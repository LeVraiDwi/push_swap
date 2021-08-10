#include "push_swap.h"

void	ft_four_one(t_pile *pile)
{
	pa(pile);
	sa(pile);
}

void	ft_four_two(t_pile *pile)
{
	ra(pile);
	pa(pile);
	sa(pile);
	while (!is_sort(pile))
		rra(pile);
}

void	ft_four_three(t_pile *pile)
{
	if (pile->l == 4)
		rra(pile);
	pa(pile);
	ra(pile);
	if (pile->l == 5)
		ra(pile);
}

void	ft_four_four(t_pile *pile)
{
	pa(pile);
	ra(pile);
}
