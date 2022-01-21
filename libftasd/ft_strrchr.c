/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:02:55 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/18 18:02:55 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;
    const char  *ini;

    ini = s;
    i = ft_strlen(s);
    s = (s + i);
    while (*s != *ini && c != *s)
    {
        s--;
    }
    if (c == *s)
    {
        return ((char *)s);
    }
    else
        return (0);
}
/*int main()
{
    char a[] = "Hasan Kececi";
    printf("%s",ft_strrchr(a,'e'));
}*/