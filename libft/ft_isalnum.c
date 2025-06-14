/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:58:53 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 12:47:29 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// isalnum()
//     checks for an alphanumeric character; 
// 	   it is equivalent to (isalpha(c) || isdigit(c)). 
// 
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
// 
// int main(void)
// {
// 	printf("Original function value returned: %d\n",isalnum('A'));
// 	printf("Original function value returned: %d\n",isalnum('4'));
// 	printf("Original function value returned: %d\n",isalnum('^'));
// 	printf("My function value returned: %d\n",ft_isalnum('A'));
// 	printf("My function value returned: %d\n",ft_isalnum('4'));
// 	printf("My function value returned: %d\n",ft_isalnum('^'));
// }
