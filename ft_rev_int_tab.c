/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcalais <joan.calais@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 23:13:06 by jcalais           #+#    #+#             */
/*   Updated: 2026/02/05 23:49:12 by jcalais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	door;

	door = 1;
	while (door)
	{
		door = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				door = 1;
			}
			i++;
		}
	}
}

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_tab(int *tab, int size)
{
	int	i;

	printf("[");
	for (i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("]\n");
}

int	main(void)
{
	int	tab1[] = {5, 2, 8, 1, 9};
	int	tab2[] = {-5, 42, 0, -12, 7, 3};
	int	tab3[] = {100};
	int	tab4[] = {3, 3, 3, 3};
	int	tab5[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int	tab6[] = {0, 1, 2, 3, 4, 5};

	printf("Test 1 - Tableau desordonne:\n");
	printf("Avant: ");
	print_tab(tab1, 5);
	ft_sort_int_tab(tab1, 5);
	printf("Apres: ");
	print_tab(tab1, 5);
	printf("\n");

	printf("Test 2 - Avec negatifs:\n");
	printf("Avant: ");
	print_tab(tab2, 6);
	ft_sort_int_tab(tab2, 6);
	printf("Apres: ");
	print_tab(tab2, 6);
	printf("\n");

	printf("Test 3 - Un seul element:\n");
	printf("Avant: ");
	print_tab(tab3, 1);
	ft_sort_int_tab(tab3, 1);
	printf("Apres: ");
	print_tab(tab3, 1);
	printf("\n");

	printf("Test 4 - Doublons:\n");
	printf("Avant: ");
	print_tab(tab4, 4);
	ft_sort_int_tab(tab4, 4);
	printf("Apres: ");
	print_tab(tab4, 4);
	printf("\n");

	printf("Test 5 - Ordre inverse:\n");
	printf("Avant: ");
	print_tab(tab5, 10);
	ft_sort_int_tab(tab5, 10);
	printf("Apres: ");
	print_tab(tab5, 10);
	printf("\n");

	printf("Test 6 - Deja trie:\n");
	printf("Avant: ");
	print_tab(tab6, 6);
	ft_sort_int_tab(tab6, 6);
	printf("Apres: ");
	print_tab(tab6, 6);

	return (0);
}
