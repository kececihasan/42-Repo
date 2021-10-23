/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkececi <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:19:23 by hkececi           #+#    #+#             */
/*   Updated: 2021/10/23 14:31:19 by hkececi          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void rush(int x, int y)
{
	int xw;
	int yw;

	yw = 1;
	while(yw <= y && x > 0)
	{
		xw = 1;
		while(xw <= x && y > 0)
		{
			if((xw != 1 && xw != x)&&(yw == 1 || yw == y))
			{
				ft_putchar('-');
			}
			else if((yw != 1 && yw != y)&&(xw == 1 || xw == x))
			{
				ft_putchar('|');
			}
			else if((xw == 1 || xw == x) || (yw== 1 || yw == y))
			{
				ft_putchar('o');
			}
			else
			{
				ft_putchar(' ');
			}
			xw++;
		}
		yw++;
		ft_putchar('\n');
	}
}
