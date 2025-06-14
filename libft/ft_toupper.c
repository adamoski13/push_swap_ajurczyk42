/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:35:06 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/29 18:54:07 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// toupper() converts the letter c to upper case, if possible. 

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
//
// int main(void)
// {
// 	printf("Original function value returned: %d\n",toupper('5'));
// 	printf("Original function value returned: %d\n",toupper('b'));
// 	printf("Original function value returned: %d\n",toupper('a'));
// 	printf("My function value returned: %d\n",ft_toupper('5'));
// 	printf("My function value returned: %d\n",ft_toupper('b'));
// 	printf("My function value returned: %d\n",ft_toupper('a'));
// }
//
