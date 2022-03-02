/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <hkececi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:20:17 by hkececi           #+#    #+#             */
/*   Updated: 2022/03/02 17:32:40 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
// Allocates (with malloc(3)) and returns an array of strings obtained by
// splitting 's' using character 'c' as a delimiter. The array must be ended
// by a NULL pointer.

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*ft_create_str(const char *str, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, i + 1);
	return (ptr);
}

static void	*ft_free(char **ptr, int i)
{
	while (i > 0)
		free(ptr[i--]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		leng;
	char	**split;

	if (!s)
		return (0);
	leng = count_words(s, c);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	while (++i < leng)
	{
		while (s[0] == c)
			s++;
		split[i] = ft_create_str(s, c);
		if (!split[i])
			return (ft_free(split, i));
		s = s + ft_strlen(split[i]);
	}
	split[i] = 0;
	return (split);
}
/*int main()
{
	int i = 0;
	char **a;
	a = ft_split("hasan.kececi.asda", '.');
	printf("%s\n",a[0]);
	printf("%s\n",a[1]);
	printf("%s\n",a[2]);
}*/
