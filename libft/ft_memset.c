/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:51:21 by hkececi           #+#    #+#             */
/*   Updated: 2022/02/15 13:37:19 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ub;

	ub = (unsigned char *)b;
	while (len--)
		*ub++ = (unsigned char)c;
	return (b);
}
/*int	main()
{
	char name[] = "Hasan";
	printf("%s",ft_memset(name, 'c', 3));
}*/
