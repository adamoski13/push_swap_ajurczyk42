/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 23:37:31 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/02 23:38:33 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_putchar_fd() function writes the 
// character c on the file descriptor fd

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
