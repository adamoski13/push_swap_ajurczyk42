/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:54:47 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 14:40:44 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The atoi() function converts the initial portion of the string
// pointed to by nptr to int.

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	odd_or_even;

	result = 0;
	odd_or_even = 1;
	i = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11
		|| str[i] == 12 || str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			odd_or_even = -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	result = result * odd_or_even;
	return (result);
}

// int main(void)
// {
// 	char string[] = "-2147483647";

// 	printf("Original function value return:%d\n", atoi(string));
// 	printf("My function value return:%d\n", ft_atoi(string));
// }
