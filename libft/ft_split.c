/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamjurczyk <adamjurczyk@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:57:12 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/05/09 16:54:34 by adamjurczyk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Split returns an array of strings obtained 
// by splitting string using the character as a delimiter

int	count_strings(const char *src, char c)
{
	int	count;
	int	check;

	count = 0;
	check = 0;
	while (*src)
	{
		if (*src != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (*src == c)
		{
			check = 0;
		}
		src++;
	}
	return (count);
}

void	*ft_free(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (0);
}

char	**ft_split(const char *src, char c)
{
	size_t	i;
	int		j;
	int		count;
	char	**dest;

	i = 0;
	j = 0;
	count = count_strings(src, c);
	dest = (char **)ft_calloc((count + 1), sizeof(char *));
	if (!dest)
		return (0);
	while (j < count)
	{
		src = src + i;
		while (*src == c)
			src++;
		i = ft_strchr(src, c) - src;
		dest[j] = ft_substr(src, 0, i);
		if (!dest[j])
			return (ft_free(dest));
		j++;
	}
	dest[j] = NULL;
	return (dest);
}

//  int main(void)
//  {
//  	char str[] = "";
// 	char **str2 = ft_split(str, 32);
// 	int i = 0;
// 	int j = count_strings(str, 32);
// 	while (i < j)
// 	{
// 		printf("%s\n", str2[i]);
// 		free(str2[i]);
// 		i++;
// 	}
// 	free(str2);
// 	return 0;
// }