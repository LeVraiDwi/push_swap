#include "push_swap.h"

int	ft_is_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_create_list(int argc, char **argv, t_pile *pile)
{
	int			i;
	long int	l;

	i = 0;
	pile->a = (int *)malloc(sizeof(int) * argc - 1);
	if (!pile->a)
		return (0);
	pile->b = (int *)malloc(sizeof(int) * argc - 1);
	if (!pile->b)
		return (0);
	while (i < argc - 1)
	{
		l = ft_atoi(argv[i + 1]);
		if (l <= HIGHT_INT && l >= LOW_INT)
			pile->a[i] = l;
		else
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_double(int i, t_pile *pile)
{
	int	j;

	j = i + 1;
	while (j < pile->l)
	{
		if (pile->a[j] == pile->a[i])
			return (1);
		j++;
	}
	return (0);
}

int	ft_no_double(t_pile *pile)
{
	int	i;

	i = 0;
	while (i < pile->l - 1)
	{
		if (ft_is_double(i, pile))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_list(int argc, char **argv, t_pile *pile)
{
	if (!ft_is_num(argc, argv))
		return (0);
	if (!ft_create_list(argc, argv, pile))
		return (0);
	if (!ft_no_double(pile))
		return (0);
	return (1);
}
