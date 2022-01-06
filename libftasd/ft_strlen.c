/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:37:50 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/06 15:50:37 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

/*int	main(void)
{
	char str[] = "Hasan";
	char *p_str;

	p_str = str;
	
	int count = ft_strlen(p_str);

	printf("%d", count);
}*/
