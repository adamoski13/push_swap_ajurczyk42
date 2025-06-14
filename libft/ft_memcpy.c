/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:46:12 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 13:12:56 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The memcpy() function copies n bytes from memory area src to
// memory area dest.  The memory areas must not overlap.  Use
// memmove(3) if the memory areas do overlap.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (dest);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*tmp_dest++ = *tmp_src++;
		n--;
	}
	return (dest);
}
//
// int main(void)
// {
// 	char	array1[30];
// 	char	array2[30];
// 	char	array11[30];
// 	char	array22[30];
// 	int i;
//
// 	printf("Original function resoult:\n");
// 	memcpy(array1, array2, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array2[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	printf("My function resoult:\n");
// 	ft_memcpy(array11, array22, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array11[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array22[i]);
// 		i++;
// 	}
// 	return (0);
// }
