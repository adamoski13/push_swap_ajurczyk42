/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:19:38 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 13:36:38 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The memmove() function copies n bytes from memory area src to
// memory area dest.  The memory areas may overlap: copying takes
// place as though the bytes in src are first copied into a
// temporary array that does not overlap src or dest, and the bytes
// are then copied from the temporary array to dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (!dest && !src)
		return (0);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (tmp_dest > tmp_src)
	{
		while (n > 0)
		{
			n--;
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*tmp_dest++ = *tmp_src++;
			n--;
		}
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
// 	memmove(array1, array2, 15);
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
// 	ft_memmove(array11, array22, 15);
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
