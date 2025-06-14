/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:40:57 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/29 17:58:02 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// isdigit()
//     checks for a digit (0 through 9). 
// 
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// 
// int main(void)
// {
// 	printf("Original function value returned: %d\n",isdigit('1'));
// 	printf("Original function value returned: %d\n",isdigit('6'));
// 	printf("Original function value returned: %d\n",isdigit('a'));
// 	printf("My function value returned: %d\n",ft_isdigit('1'));
// 	printf("My function value returned: %d\n",ft_isdigit('6'));
// 	printf("My function value returned: %d\n",ft_isdigit('a'));
// }
