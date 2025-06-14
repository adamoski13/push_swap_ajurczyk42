/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 03:28:37 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 15:22:32 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// Returns the substring of the given string at the given start
// position with the given length (or smaller if the length of the
// original string is less than start + length, or length is bigger
// than MAXSTRINGLEN).

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//
// int main() 
// {
//     char string[] = "Hello, Crazy Frogs!";
//
// 	printf("My function value: %s\n",ft_substr(string, 7, 5));
//     return 0;
// }
