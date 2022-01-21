/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:19:39 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/21 14:38:26 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t  i;

    i = 0;
    while(i < n)
    {
        ptr = (unsigned char *) s;
        if (*ptr == (unsigned char)c)
        {
            return(ptr);
        }
        i++;
        s++;
    }
    return (0);
}
/*int main()
{
    char a[] = "Hasan";
    printf("%s",ft_memchr(a,'s',5));
}*/