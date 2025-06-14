/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:25:36 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 12:51:30 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
//    The strlen() function calculates the length of the string pointed
//    to by s, excluding the terminating null byte ('\0').

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// 
// int main(void)
// {
// 	char string1[] = "Adam have a cat";
// 	char string2[] = "Adam";
// 	char string3[] = "    have a cat    ";
//
// 	printf("Original function value returned: %lu\n",strlen(string1));
// 	printf("Original function value returned: %lu\n",strlen(string2));
// 	printf("Original function value returned: %lu\n",strlen(string3));
// 	printf("My function value returned: %d\n",ft_strlen(string1));
// 	printf("My function value returned: %d\n",ft_strlen(string2));
// 	printf("My function value returned: %d\n",ft_strlen(string3));
// }
