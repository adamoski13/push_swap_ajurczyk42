/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:27:24 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 12:57:16 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The memset() function fills the first n bytes of the memory area
// pointed to by s with the constant byte c.
// 
void	*ft_memset(void *s, const int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp++ = (unsigned char)c;
		n--;
	}
	return (s);
}
//
// int main(void)
// {
// 	char	array1[30];
// 	char	array2[30];
// 	int i;

// 	printf("Original function resoult:\n");
// 	memset(array1, 69, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array1[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	printf("My function resoult:\n");
// 	ft_memset(array2, 69, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array2[i]);
// 		i++;
// 	}
// 	return (0);
// }
