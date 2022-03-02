/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:06:40 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/02 14:04:26 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static long	ft_uzunluk(int n)
{
	long	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

char	*ft_itoa(int n)
{
	long	n_long;
	long	length;
	char	*result;
	int		isaret;

	isaret = n < 0;
	n_long = n;
	length = ft_uzunluk(n_long);
	result = (char *)malloc((length + 1) *sizeof(char));
	if (!result)
		return (NULL);
	result[length] = '\0';
	length--;
	if (n_long < 0)
		n_long = -n_long;
	while (length >= 0)
	{
		result[length] = (n_long % 10) + '0';
		n_long /= 10;
		length--;
	}
	if (isaret)
		result[0] = '-';
	return (result);
}
/*int main()
{
	int a = 2147483647;
	printf("%s",ft_itoa(a));
}*/
