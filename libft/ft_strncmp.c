/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:26:04 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 16:40:39 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strncmp() function shall compare not more than n bytes (bytes
// that follow a NUL character are not compared) from the array
// pointed to by s1 to the array pointed to by s2.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	i = 0;
	if (n > 0)
	{
		while (s1_temp[i] == s2_temp[i] && (i < (n - 1))
			&& (s1_temp[i] || s2_temp[i]))
			i++;
		return (s1_temp[i] - s2_temp[i]);
	}
	return (0);
}
//
// int main(void)
// {
// 	char string1[] = "Adam ma kota";
// 	char string2[] = "Adam ma kota";
//
// 	printf("Original function value: %d\n",strncmp(string1, string2, 4));
// 	printf("My function value: %d\n",ft_strncmp(string1, string2, 4));
// }
