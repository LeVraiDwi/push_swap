#include "push_swap.h"

int	ft_small_sort(t_pile *pile)
{
	int	flag;

	flag  = ft_case(pile);
	if (!flag)
		return (0);
	if (flag == CASE_ONE)
		sa(pile);
	else if (flag == CASE_TWO)
	{
		sa(pile);
		rra(pile);
	}
	else if (flag == CASE_THREE)
		ra(pile);
	else if (flag == CASE_FOUR)
	{
		sa(pile);
		ra(pile);
	}
	else if (flag == CASE_FIVE)
		rra(pile);
	return (1);
}

void	ft_reverse_pick(t_pile *pile)
{
		while (pile->a[0] != 0)
		{
			if (pile->a[0] == 1)
				pb(pile);
			else
				ra(pile);
		}
}

void	ft_pick(t_pile *pile)
{
		while (pile->a[0] != 0)
		{
			if (pile->a[0] == 1)
				pb(pile);
			else
				rra(pile);
		}
}

void	ft_brute_sort(t_pile *pile)
{
	int	i;

	i = 0;
	if (pile->b[0] == 0)
		pa(pile);
	else if (pile->lb == 2 && pile->b[1] == 0)
	{
		sb(pile);
		pa(pile);
	}
	if (pile->lb == 2 && pile->b[0] < pile->b[1])
		sb(pile);
	while (!is_sort(pile) || pile->lb != 0)
	{
		if (pile->lb != 0 && (pile->a[0] == pile->b[0] + 1 || pile->a[pile->l - 1] == pile->b[0] - 1))
		{
			pa(pile);
			if (pile->lb == 0 && i <= 2)
				while (!is_sort(pile))
					rra(pile);
		}
		else
		{
			i++;
			ra(pile);
		}
	}
}

int	ft_medium_sort(t_pile *pile)
{
	pb(pile);
	if (pile->l == 4)
		pb(pile);
	ft_small_sort(pile);
	ft_brute_sort(pile);
	return (1);
}
