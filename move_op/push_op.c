/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:16 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/14 20:14:22 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list *s)
{
	int	tmp;

	tmp = s->b[0];
	ft_memmove(s->a + 1, s->a, sizeof(int) * s->a_size);
	s->a[0] = tmp;
	s->b_size--;
	ft_memmove(s->b, s->b + 1, sizeof(int) * s->b_size);
	s->a_size++;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list *s)
{
	int	tmp;

	tmp = s->a[0];
	ft_memmove(s->b + 1, s->b, sizeof(int) * s->b_size);
	s->b[0] = tmp;
	s->a_size--;
	ft_memmove(s->a, s->a + 1, sizeof(int) * s->a_size);
	s->b_size++;
	ft_putstr_fd("pb\n", 1);
}
