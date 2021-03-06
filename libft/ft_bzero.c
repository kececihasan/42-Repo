/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:55:58 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/01 11:16:11 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//The bzero() function writes n zeroed bytes to the string s. If n is
//zero, bzero() does nothing.
//ft_memset(s, '\0', n); fonksiyonu ile aynı iş yapılabilir.

void	*ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
/*int main()
{
	ft_bzero(b, 6);
}*/
