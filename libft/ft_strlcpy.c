/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:53:57 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 13:53:45 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// The strlcpy() function copies up to size - 1 characters 
// from the NUL-terminated string src to dst, 
// NUL-terminating the result. 

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;

	if (!n)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	if (src_len + 1 < n)
		ft_memcpy(dest, src, src_len + 1);
	else if (n)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
	}
	return (ft_strlen(src));
}
// void test(int size)
// {
//     char string[] = "Hello there, Venus";
//     char buffer[19];
//     int r;

//     r = ft_strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %d\n",
//             string,
//             buffer,
//             r
//           );
// }
//
// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);
//
//     return(0);
// }
