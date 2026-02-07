/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:07:47 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/07 23:07:33 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	numbers[16];
	/* Securitee */
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	/* Verification */
	if (!ft_check_inputs(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	/* Parsing */
	}
	ft_char_to_int(argv[1], numbers);
/*  Suite a coder : Resolution du skyscraper En utilisant numbers[]
	Rappel : numbers[0]~[3] = Haut // [4]~[7] = bas //
	[8]~[11] = gauche // [12]~[15] = droite */
	return (0);
}
