/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:10:47 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 13:26:27 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The memcmp() function compares the first n bytes (each
// interpreted as unsigned char) of the memory areas s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_temp[i] != s2_temp[i])
			return (s1_temp[i] - s2_temp[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char string1[] = {-128, 0, 127, 0};
// 	char string2[] = {-128, 0, 127, 0};
//
// 	printf("Original function value: %d\n",memcmp(string1, string2, 4));
// 	printf("My function value: %d\n",ft_memcmp(string1, string2, 4));
// }
