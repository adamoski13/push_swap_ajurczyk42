/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:10:48 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/29 18:00:11 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// tolower() converts the letter c to lower case, if possible.

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
//
// int main(void)
// {
// 	printf("Original function value returned: %d\n",tolower('5'));
// 	printf("Original function value returned: %d\n",tolower('B'));
// 	printf("Original function value returned: %d\n",tolower('A'));
// 	printf("My function value returned: %d\n",ft_tolower('5'));
// 	printf("My function value returned: %d\n",ft_tolower('B'));
// 	printf("My function value returned: %d\n",ft_tolower('A'));
// }
//
