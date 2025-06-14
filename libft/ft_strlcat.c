/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:43:35 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/30 16:39:55 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strlcat() function appends the 
// NUL-terminated string src to the end of dst. 
// It will append at most size - strlen(dst) - 1 
// bytes, NUL-terminating the result. 

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= n)
	{
		dest_len = n;
		return (n + src_len);
	}
	if (n > dest_len + src_len)
		ft_memcpy(dest + dest_len, src, src_len + 1);
	else
	{
		ft_memcpy(dest + dest_len, src, n - dest_len - 1);
		dest[n - 1] = '\0';
	}
	return (dest_len + src_len);
}
