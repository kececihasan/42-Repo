/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:14:06 by hkececi           #+#    #+#             */
/*   Updated: 2022/01/26 18:14:06 by hkececi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_atoi(const char *str)
{
    int c;
    int s;
    int res;

    c = 0;
    s = 1;
    res = 0;
    while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t' ||
            str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
        c++;
    while (str[c] == '-' || str[c] == '+')
    {
        if (str[c] == '-')
            s *= -1;
        c++;
    }
    while (str[c] >= '0' && str[c] <= '9')
    {
        res = (res * 10) + (str[c] - '0');
        c++;
    }
    return (res * s);
}
/*int main()
{
    char a[] = "      ---+--+2147--+-ab567";
    printf("%d", ft_atoi(a));
}*/