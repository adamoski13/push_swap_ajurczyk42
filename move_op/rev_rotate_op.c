/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:22 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/14 20:12:09 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(int *arr, int size)
{
	int	tmp;

	tmp = arr[size - 1];
	ft_memmove(arr + 1, arr, sizeof(int) * (size - 1));
	arr[0] = tmp;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(int *arr, int size)
{
	int	tmp;

	tmp = arr[size - 1];
	ft_memmove(arr + 1, arr, sizeof(int) * (size - 1));
	arr[0] = tmp;
	ft_putstr_fd("rrb\n", 1);
}
