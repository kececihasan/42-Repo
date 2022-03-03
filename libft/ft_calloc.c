/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:05:00 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/03 16:47:28 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * n);
	return (ptr);
}
/*int main()
{
	char *a;

	a = ft_calloc(1, 5);
}*/
