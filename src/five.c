#include "push_swap.h"

void	ft_consecutive(t_pile *pile)
{
	if (pile->b[0] < pile->b[1])
		sb(pile);
	if (pile->b[0] == 1 || pile->b[1] == 1)
		ft_consecutive_two(pile);
	else
		ft_consecutive_three(pile);
}

void	ft_consecutive_two(t_pile *pile)
{
	if (pile->b[1] == 1)
		ra(pile);
	pa(pile);
	pa(pile);
	if (pile->a[0] != 0)
		rra(pile);
}

void	ft_consecutive_three(t_pile *pile)
{
	if (pile->b[0] == 3)
		rra(pile);
	pa(pile);
	pa(pile);
	if (pile->a[0] != 0)
	{
		rra(pile);
		rra(pile);
	}
}

void	ft_zero(t_pile *pile)
{
	if (pile->b[0] > pile->b[1])
		sb(pile);
	pa(pile);
	ft_sort_four(pile);
}

void	ft_two(t_pile *pile)
{
	if (pile->b[0] > pile->b[1])
		sb(pile);
	pa(pile);
	sa(pile);
	ft_sort_four(pile);
}
