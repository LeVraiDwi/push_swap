#include "push_swap.h"

int ft_radix(t_pile *pile)
{
	int	size_num;
	int	max_bit;
	int	i;
	int	j;

	size_num = pile->l - 1;
	max_bit = 0;
	while (size_num >> max_bit != 0)
		max_bit++;
	i = 0;
	while (i < max_bit)
	{
		j = 0;
		while (j < pile->size)
		{
			if (((pile->a[0] >> i)&1) == 1)
				ra(pile);
			else
				pb(pile);
			j++;
		}
		while (pile->lb != 0)
			pa(pile);
		i++;
	}
	return (1);
}
