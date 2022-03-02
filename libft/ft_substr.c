/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:01:21 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/02 18:14:28 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t leng)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (start + ft_strlen(str) < leng)
		leng = start + ft_strlen(str);
	res = (char *) malloc(sizeof(char) * (leng + 1));
	if (!res)
		return (NULL);
	while (i < leng && str[start] && start < ft_strlen(str))
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}
/*int main()
{
	char a[] = "Hasan Kececi";
	printf("%s",ft_substr(a,3,4));
}*/
