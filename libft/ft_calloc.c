/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:05:00 by hkececi           #+#    #+#             */
/*   Updated: 2022/02/07 14:59:29 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	ptr = malloc(n *size);
	if (ptr = NULL)
		return (ptr);
	ft_bzero(ptr, size * n);
	return (ptr);
}
int main()
{
	int *arr,i;
	ft_calloc(10,sizeof(int));
	*arr = 7;
	*(arr+1)=99;
	for(i = 0; i < 10; i++)
	{
		printf("%d\n",*(arr+i));
	}
}