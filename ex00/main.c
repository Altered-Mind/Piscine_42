/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:07:47 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/08 18:36:07 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_grid_init(int grid[4][4]);
void	ft_grid_print(int grid [4][4]);
int		ft_check_inputs(char *str);
void	ft_char_to_int(char *str, int *converted);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	numbers[16];
	int	grid[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!ft_check_inputs(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_char_to_int(argv[1], numbers);
	ft_grid_init(grid);
	ft_grid_print(grid);
	return (0);
}
/* Entre ft_grid_init et ft_grid_print :
	Resolution du skyscraper En utilisant numbers[]
	Rappel : numbers[0]~[3] = Haut, [4]~[7] = bas,
	[8]~[11] = gauche, [12]~[15] = droite */
