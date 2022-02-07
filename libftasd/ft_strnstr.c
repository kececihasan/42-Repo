/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:08:50 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/26 15:08:50 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  b;
    size_t  l;

    b = 0;
    if (little[0] == '\0')
        return ((char *)&big[b]);
    while (big[b] != '\0')
    {
        l = 0;
        while (big[b + l] == little[l] && little[l] && (b + l) < len)
        {
            l++;
        }
        if (little[l] == '\0')
            return ((char *)&big[b]);
        b++;
    }
    return (0);
}
/*int main()
{
    char string1[] = "Dab Bad Da";
    char string2[] = "Dab";
    printf("%s",ft_strnstr(string1,string2,4));
}*/