/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:22:54 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 15:09:26 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The calloc() function allocates memory for an array 
// of nmemb elements of size bytes each and returns a 
// pointer to the allocated memory. The memory is set 
// to zero. If nmemb or size is 0, then calloc() returns 
// either NULL, or a unique pointer value that can later 
// be successfully passed to free(). 

void	*ft_calloc(size_t num, size_t n)
{
	size_t			i;
	size_t			mem;
	unsigned char	*temp;

	mem = num * n;
	if (mem && mem / num != n)
		return (0);
	temp = malloc(mem);
	if (!temp)
		return (0);
	i = 0;
	while (i < mem)
		temp[i++] = 0;
	return (temp);
}
//
// int main()
// {
// 	int i, *ptr1, *ptr2, sum = 0;
// 
// 	printf("Oryginal function in result:\n");
// 	ptr1 = calloc(10, sizeof(int));
// 	if (ptr1 == NULL)
// 	{
// 		printf("Error! memory not allocated.");
// 		exit(0);
// 	}
// 	for (i = 0; i < 10; ++i) 
// 	{ 
// 		*(ptr1 + i) = i;
// 		sum += *(ptr1 + i);
// 	}
// 	printf("Sum = %d", sum);
// 	free(ptr1);
// 	sum = 0;
// 	printf("\n\nMy function in result:\n");
// 	ptr2 = ft_calloc(10, sizeof(int));
// 	if (ptr2 == NULL)
// 	{
// 		printf("Error! memory not allocated.");
// 		exit(0);
// 	}
// 	for (i = 0; i < 10; ++i) 
// 	{ 
// 		*(ptr2 + i) = i;
// 		sum += *(ptr2 + i);
// 	}
// 	printf("Sum = %d", sum);
// 	free(ptr2);
// 	return 0;
// }
