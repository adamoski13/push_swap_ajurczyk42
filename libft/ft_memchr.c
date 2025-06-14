/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:32:51 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 15:29:49 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
// The memchr() function returns a pointer to the 
// first byte in a block of memory which contains 
// a specified value.

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_temp;
	unsigned char	c_temp;

	i = 0;
	c_temp = (unsigned char)c;
	src_temp = (unsigned char *)src;
	while (i < n)
	{
		if (src_temp[i] == c_temp)
			return ((void *)&src_temp[i]);
		i++;
	}
	return (0);
}
// 
// int main(void)
// {
// 	char string1[] = "Adam ma kota";
// 	char string2[] = "Adam ma kota";
//
// 	printf("Original function value returned: %s\n",memchr(string1, 'm', 12));
// 	printf("My function value returned: %s\n",ft_memchr(string2, 'm', 12));
// }
// 
