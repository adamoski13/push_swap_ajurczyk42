/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:21:08 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/12 19:57:44 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strrchr() function returns a pointer to the 
// last occurrence of the character c in the string s.

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	temp;

	temp = (unsigned char)c;
	i = 0;
	while (str[i])
		i++;
	if (str[i] == temp)
		return ((char *)&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == temp)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

// int main(void)
// {
// 	char string1[] = "Adam ma kota";
// 	char string2[] = "Adam ma kota";

// 	printf("Original function value returned: %s\n",strrchr(string1, 'a'));
// 	printf("Original function value returned: %s\n",ft_strrchr(string2, 'a'));
// }
