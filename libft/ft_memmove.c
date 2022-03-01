/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:10:41 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/01 11:27:35 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *) src;
	b = (char *) dest;
	if (a < b)
		while (len--)
			b[len] = a[len];
	else
		ft_memcpy(b, a, len);
	return (dest);
}
/*int main()
{
	char dest[] = "Hasan";
	char source[] = "Kececi";
	ft_memmove(dest,source,6);
}*/
