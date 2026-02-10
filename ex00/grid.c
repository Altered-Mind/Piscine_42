/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:27:56 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/08 18:41:23 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_grid_init(int grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
}

void	ft_grid_print(int grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			ft_putchar(grid[x][y] + '0');
			if (y < 3)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
