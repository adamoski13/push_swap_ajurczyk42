/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:40:01 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 14:18:45 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strnstr() function locates the first	occurrence of the  null-termi-
// nated  string little in the string big, where not more than len charac-
// ters are	searched.  Characters that appear after	a `\0'	character  are
// not  searched.

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find[i] || (str[i] == to_find[i] && n == 1))
		return ((char *)str);
	if (!n)
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && i < n - 1)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
		j = 0;
	}
	return (0);
}

// int main(void)
// {
// 	char string1[] = "aaabcabcd";
// 	char string2[] = "a";
//
// 	// printf("Original function value: %d\n",strnstr(string1, string2, 8));
// 	printf("My function value: %s\n",ft_strnstr(string1, string2, 1));
// }
