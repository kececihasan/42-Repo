/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:01:36 by hkececi           #+#    #+#             */
/*   Updated: 2022/02/07 15:03:40 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char  *dest;
	size_t leng;

	leng = ft_strlen(src) + 1;
	dest = malloc(sizeof(src[0]) * leng);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, src, leng);
	return (dest);
}
