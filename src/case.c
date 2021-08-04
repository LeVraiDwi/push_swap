#include "push_swap.h"

int	is_sort(t_pile *pile)
{
	int	i;
	
	i = 0;
	while (i < pile->l - 1 && pile->a[i] + 1 == pile->a[i + 1])
		i++;
	if (i == pile->l -1)
		return (1);
	return (0);
}

int	ft_case(t_pile *pile)
{
	int	*a;

	a = pile->a;
	if (a[1] < a[0] && a[0] < a[2])
		return (CASE_ONE);
	else if (a[2] < a[1] && a[1] < a[0])
		return (CASE_TWO);
	else if (a[1] < a[2] && a[2] < a[0])
		return (CASE_THREE);
	else if (a[0] < a[2] && a[2] < a[1])
		return (CASE_FOUR);
	else if (a[2] < a[0] && a[0] < a[1])
		return (CASE_FIVE);
	return (0);
}
