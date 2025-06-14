/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:21:51 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/29 17:58:06 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// isprint()
//     checks for any printable character including space. 

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
//
// int main(void)
// {
// 	printf("Original function value returned: %d\n",isprint('A'));
// 	printf("Original function value returned: %d\n",isprint('b'));
// 	printf("Original function value returned: %d\n",isprint(' '));
// 	printf("My function value returned: %d\n",ft_isprint('A'));
// 	printf("My function value returned: %d\n",ft_isprint('b'));
// 	printf("My function value returned: %d\n",ft_isprint(' '));
// }
//
