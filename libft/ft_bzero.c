/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:42:31 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 13:08:01 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp++ = '\0';
		n--;
	}
}
//
// int main(void)
// {
// 	char	array1[30];
// 	char	array2[30];
// 	int i;
//
// 	printf("Original function resoult:\n");
// 	bzero(array1, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array1[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// 	printf("My function resoult:\n");
// 	ft_bzero(array2, 15);
// 	i = 0;
// 	while (i < 30)
// 	{
// 		printf("%d ", array2[i]);
// 		i++;
// 	}
// 	return (0);
// }
