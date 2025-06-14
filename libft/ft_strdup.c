/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 23:16:01 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 16:08:18 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strdup() function returns a pointer to a new string which is
// a duplicate of the string s.

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*dest;

	i = ft_strlen(src) + 1;
	dest = (char *)ft_calloc(i, sizeof(char));
	if (!dest)
		return (0);
	ft_strlcpy(dest, src, i + 1);
	return (dest);
}
// 
// int main(void)
// {
// 	char string[] = "Adam ma kota";
//
// 	printf("Original function value: %s\n",strdup(string));
// 	printf("My function value: %s\n",ft_strdup(string));
// }
//
