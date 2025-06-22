/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:41 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/22 19:40:58 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_list(int argc, char **argv, t_list *s)
{
	int	i;

	i = 0;
	s->a_size = 0;
	s->b_size = 0;
	while (--argc)
	{
		if (ft_count_words(argv[i + 1], ' '))
			s->a_size += ft_count_words(argv[i + 1], ' ');
		else
			s->a_size++;
		i++;
	}
	s->a = malloc(s->a_size * sizeof * s->a);
	if (s->a == NULL)
		free_stacks(s, "Error\n");
	s->b = malloc(s->a_size * sizeof * s->b);
	if (s->b == NULL)
		free_stacks(s, "Error\n");
}

static void	join_args(int ac, char **av, t_list *s)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	tmp2 = ft_strdup("");
	while (++i < ac && av[i] != NULL)
	{
		tmp = ft_strjoin(tmp2, av[i]);
		if (tmp2)
			free(tmp2);
		if (i != ac - 1)
		{
			tmp2 = ft_strjoin(tmp, " ");
			if (tmp)
				free(tmp);
			tmp = tmp2;
		}
	}
	s->join_args = ft_strdup(tmp);
	if (s->join_args == NULL)
		free_stacks(s, "Error\n");
	if (tmp)
		free(tmp);
}

void	fill_stack(t_list *s, int ac, char **av)
{
	initialize_list(ac, av, s);
	join_args(ac, av, s);
	parse_numbers(s);
	exit_if_sorted_or_has_duplicate(s, 0);
}

int	main(int ac, char **av)
{
	t_list	*s;

	arg_check(ac, av);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(1);
	fill_stack(s, ac, av);
	create_index(s);
	if (is_a_sorted(s))
		free_stacks(s, NULL);
	else if (s->a_size == 2)
		sa(s->a);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else
		over_six_sort(s);
	exit_if_sorted_or_has_duplicate(s, 1);
	free_stacks(s, "Error\n");
	return (0);
}
