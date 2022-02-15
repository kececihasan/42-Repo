/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:29:26 by hkececi           #+#    #+#             */
/*   Updated: 2022/02/15 16:36:16 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*int main()
{
    char s1[] = "Hasan";
	char s2[] = "Test bir iki";
	char s3[] = "Test";
    printf("1,2: %d, 2,1: %d", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5));
	printf("\n\n3,2: %d, 2,3: %d", ft_strncmp(s3, s2, 4), ft_strncmp(s3, s2, 6));
}*/
