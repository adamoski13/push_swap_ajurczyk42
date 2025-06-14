/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:26:37 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/12 19:08:19 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
// The strchr() function returns a pointer to the first occurrence
// of the character c in the string s.

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	unsigned char	temp;

	temp = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == temp)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == temp)
		return ((char *)&str[i]);
	return (0);
}

// int main(void)
// {
// 	char string1[] = "Adam ma kota";
// 	char string2[] = "Adam ma kota";

// 	printf("Original function value returned: %s\n",strchr(string1, 'k'));
// 	printf("Original function value returned: %s\n",ft_strchr(string2, 'k'));
// }
