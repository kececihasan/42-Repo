/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:37:50 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/17 13:12:38 by hkececi          ###   ########.fr       */
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
	char dizi[] = "Hasanwqdsa";
	
	int count = ft_strlen(dizi);

	printf("%d", count);
}*/
