/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:01:04 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/07 22:00:12 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_inputs(char *str)
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

void	ft_char_to_int(char *str, int *converted)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= 1 && str[i] <= 4)
		{
			converted[n] = str[i] - '0';
			n++;
		}
		i++;
	}
}
