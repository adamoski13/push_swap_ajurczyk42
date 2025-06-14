/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 21:53:55 by ajurczyk          #+#    #+#             */
/*   Updated: 2025/01/06 18:51:02 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_itoa() returns the string representing n. 
// Negative numbers must be handled

int	str_len(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;
	long	nbr;
	int		len;

	nbr = n;
	len = str_len(nbr);
	dest = ft_calloc((len + 1), sizeof(char));
	if (!dest)
		return (0);
	i = len - 1;
	if (n < 0)
	{
		nbr = -nbr;
		dest[0] = '-';
	}
	else if (n == 0)
		dest[i] = '0';
	while (nbr != 0)
	{
		dest[i--] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	dest[len] = '\0';
	return (dest);
}

// int main(void)
// {
// 	int n = -125;
// 	char *number = ft_itoa(n);
// 	int i = 0;
//
// 	while(number[i])
// 	{
// 		printf("%c", number[i]);
// 		i++;
// 	}
// }