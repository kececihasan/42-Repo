/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:18:48 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/18 13:18:48 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && c != *s)
        s++;
    if (c == *s)
        return ((char *)s);
    return (0);
}
/*int main()
{
    char a[] = "Hasan";
    printf("%s",ft_strchr(a,'s'));
}*/