/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:56 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/22 19:41:35 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_words(const char *src, char c)
{
	int	count;
	int	check;

	count = 0;
	check = 0;
	while (*src)
	{
		if (*src != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (*src == c)
		{
			check = 0;
		}
		src++;
	}
	return (count);
}

void	parse_numbers(t_list *s)
{
	char	**tmp;
	int		i;
	int		z;

	z = 0;
	tmp = ft_split(s->join_args, ' ');
	i = 0;
	while (tmp[i] != NULL && tmp[i][0] != '\0')
	{
		s->a[z++] = ft_atoi_long(tmp[i++], s);
		free(tmp[i - 1]);
	}
	free(tmp);
}

void	create_index(t_list *s)
{
	int		i;
	int		j;
	int		k;
	int		*new_a;

	new_a = malloc(s->a_size * sizeof * new_a);
	if (new_a == NULL)
		free_stacks(s, "Error\n");
	i = -1;
	while (++i < s->a_size)
	{
		k = 0;
		j = -1;
		while (++j < s->a_size)
			if (s->a[i] > s->a[j])
				k++;
		new_a[i] = k;
	}
	i = s->a_size;
	while (i--)
		s->a[i] = new_a[i];
	free(new_a);
}

int	sign_ft_atoi_long(const char *n)
{
	int	i;

	i = 0;
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
		i++;
	if ((n[i] == '+' || n[i] == '-'))
	{
		if (n[i] == '-')
			return (-1);
	}
	return (1);
}

int	ft_atoi_long(const char *n, t_list *s)
{
	int			i;
	long		sign;
	long long	res;

	res = 0;
	i = 0;
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
		i++;
	if ((n[i] == '+' || n[i] == '-'))
		i++;
	sign = sign_ft_atoi_long(n);
	while (n[i])
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			free_stacks(s, "Error\n");
		res = res * 10 + (n[i++] - '0');
		if ((sign == 1 && res > 2147483647) || (sign == -1 && res > 2147483648))
			free_stacks(s, "Error\n");
	}
	return ((int)(res * sign));
}
