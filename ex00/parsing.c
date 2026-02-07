/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:01:04 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/07 18:41:23 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_inputs(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] > '0' && str[i] < '5')
			count++;
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}

int	ft_parse(char *str, int *stockage)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while(str[i])
	{
		if (str[i] <=4 && str[i] >= 1)
	}
}
