/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:34:17 by ajurczyk          #+#    #+#             */
/*   Updated: 2024/12/29 17:57:54 by ajurczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// 
// isalpha()
//               checks for an alphabetic character; in the standard "C"
//               locale, it is equivalent to (isupper(c) || islower(c)).
//               In some locales, there may be additional characters for
//               which isalpha() is true—letters which are neither
//               uppercase nor lowercase.
// 
int	ft_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
// 
// int main(void)
// {
// 	printf("Original function value returned: %d\n",isalpha('A'));
// 	printf("Original function value returned: %d\n",isalpha('b'));
// 	printf("Original function value returned: %d\n",isalpha('^'));
// 	printf("My function value returned: %d\n",ft_isalpha('A'));
// 	printf("My function value returned: %d\n",ft_isalpha('b'));
// 	printf("My function value returned: %d\n",ft_isalpha('^'));
// }
