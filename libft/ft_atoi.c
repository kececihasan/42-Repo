/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:14:06 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/01 12:37:01 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		s;
	long	res;

	s = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
		if (res * s < -2147483648)
			return (0);
		if (res * s > 2147483647)
			return (-1);
	}
	return (res * s);
}
/*int main()
{
    char a[] = "      ---+--+2147--+-ab567";
    printf("%d", ft_atoi(a));
}*/
