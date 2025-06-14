/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 04:15:13 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 17:38:35 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strtrim removes all pointed string of characters 
// from the beginning and the end of a src string.

char	*ft_strtrim(const char *src, const char *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(src);
	if (!src || !set)
		return (0);
	while (src[i] && ft_strchr(set, src[i]))
		i++;
	if (!src[i])
		return ((char *)ft_calloc(1, sizeof(char)));
	while (src[i] && ft_strchr(set, src[j]))
		j--;
	return (ft_substr(src, i, (j - i + 1)));
}

// int main(void)
// {
// 	char string1[] = "tripouille   xxx";
// 	char string2[] = " x";
// 	char *ptr;

// 	ptr = ft_strtrim(string1, string2);
// 	printf("My function value: %s\n", ptr);
// 	free(ptr);
// }
