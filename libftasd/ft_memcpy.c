/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:55:17 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/10 15:04:43 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tmp1;
	unsigned char *tmp2;

	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	while (n > 0)
	{
		*tmp2++ = *tmp1++;
		n--;
	}
	return (dst);
}
