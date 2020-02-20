/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:30:58 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 22:06:15 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int j;

	i = 0;

	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[j] > tab[i])
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int sss[10] = {21, 4, 5, 3, 6, 7, 2, 45, 7};
	ft_sort_integer_table(sss, 10);
	int i = 0;
	while (sss[i] != '\0')
	{
		printf("%d   ", sss[i]);
		i++;
	}
	return 0;
}
