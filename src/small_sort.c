#include "push_swap.h"

int	ft_small_sort(t_pile *pile)
{
	int	flag;

	if (pile->l == 3)
	{
		flag = ft_case(pile);
		if (!flag)
			return (0);
		ft_case_sort(pile, flag);
	}
	else if (pile->l == 2)
		ft_case_two(pile);
	return (1);
}

void	ft_sort_five(t_pile *pile)
{
	if (pile->b[0] == pile->b[1] + 1 || pile->b[0] == pile->b[1] - 1)
		ft_consecutive(pile);
	else if (pile->b[0] == 0 || pile->b[1] == 0)
		ft_zero(pile);
	else if (pile->b[0] == 1 || pile->b[1] == 1)
		ft_two(pile);
	else
		ft_three(pile);
}

int	ft_medium_sort(t_pile *pile)
{
	pb(pile);
	if (pile->l == 4)
		pb(pile);
	ft_small_sort(pile);
	if (pile->lb == 1)
		ft_sort_four(pile);
	else
		ft_sort_five(pile);
	return (1);
}
