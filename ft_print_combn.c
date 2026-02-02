/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:51:49 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/02 22:18:58 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_generate_comb(int *tab, int n, int pos, int dbt)
{
	int	i;

	if (pos == n)
	{
		ft_print_tab(tab, n);
		return ;
	}
	i = dbt;
	while (i <= 9)
	{
		tab[pos] = i;
		ft_generate_comb(tab, n, pos + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_generate_comb(tab, n, 0, 0);
}

int	main(void)
{
	ft_print_combn(3);
	ft_putchar('\n');
	return (0);
}
