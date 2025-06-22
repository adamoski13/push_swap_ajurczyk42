/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:51 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/22 18:46:56 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_elements(t_list *s)
{
	if (s->a[2] != 2)
	{
		if (s->a[0] == 2)
			ra(s->a, s->a_size);
		else
			rra(s->a, s->a_size);
	}
	if (s->a[0] > s->a[1])
		sa(s->a);
}

void	sort_four_to_five_elements(t_list *s)
{
	while (s->b_size <= 1)
	{
		if (s->a[0] == 0 || s->a[0] == 1)
			pb(s);
		else
			ra(s->a, s->a_size);
	}
	if (s->b[0] == 0)
		sb(s->b);
	if (s->a[2] != 4)
	{
		if (s->a[0] == 4)
			ra(s->a, s->a_size);
		else
			rra(s->a, s->a_size);
	}
	if (s->a[0] > s->a[1])
		sa(s->a);
	pa(s);
	pa(s);
}

void	radix_sort_for_b(t_list *s, int b_size, int limiter, int j)
{
	while (b_size-- && j <= limiter && !is_a_sorted(s))
	{
		if (!((s->b[0] >> j) & 1))
			rb(s->b, s->b_size);
		else
			pa(s);
	}
	if (is_a_sorted(s))
		while (s->b_size != 0)
			pa(s);
}

void	radix_sort(t_list *s, int limiter)
{
	int	j;
	int	size;

	j = 0;
	while (j <= limiter)
	{
		size = s->a_size;
		while (size-- && !is_a_sorted(s))
		{
			if (!((s->a[0] >> j) & 1))
				pb(s);
			else
				ra(s->a, s->a_size);
		}
		radix_sort_for_b(s, s->b_size, limiter, j + 1);
		j++;
	}
}

void	over_six_sort(t_list *s)
{
	int	bit_size;
	int	size;

	bit_size = 0;
	size = s->a_size;
	while (size > 1)
	{
		bit_size++;
		size /= 2;
	}
	radix_sort(s, bit_size);
	while (s->b_size != 0)
	{
		pa(s);
	}
}
