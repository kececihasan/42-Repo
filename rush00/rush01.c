/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:56:41 by hkececi           #+#    #+#             */
/*   Updated: 2021/10/23 15:16:39 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	midline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	lastline(int ix, int x)
{
	if (ix == 1)
		ft_putchar('\\');
	else if (ix == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	firstline(int ix, int x)
{
	if (ix == 1)
		ft_putchar('/');
	else if (ix == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	ix;
	int	iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1)
				firstline(ix, x);
			else if (iy == y)
				lastline(ix, x);
			else
				midline(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
