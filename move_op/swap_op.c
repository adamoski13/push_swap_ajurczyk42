/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:06:29 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/06/14 20:14:30 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(int *arr)
{
	int	tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(int *arr)
{
	int	tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(int *arr1, int *arr2)
{
	int	tmpa;
	int	tmpb;

	tmpa = arr1[0];
	arr1[0] = arr1[1];
	arr1[1] = tmpa;
	tmpb = arr2[0];
	arr2[0] = arr2[1];
	arr2[1] = tmpb;
	ft_putstr_fd("ss\n", 1);
}
