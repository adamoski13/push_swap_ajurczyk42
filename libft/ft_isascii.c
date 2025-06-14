/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:20:05 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 12:48:35 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// isascii()
//     checks whether c is a 7-bit 
// 	   unsigned char value that fits into the ASCII character set.
// 
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// 
// int main(void)
// {
// 	printf("Original function value returned: %d\n",isascii('A'));
// 	printf("Original function value returned: %d\n",isascii('4'));
// 	printf("Original function value returned: %d\n",isascii('^'));
// 	printf("My function value returned: %d\n",ft_isascii('A'));
// 	printf("My function value returned: %d\n",ft_isascii('4'));
// 	printf("My function value returned: %d\n",ft_isascii('^'));
// }
