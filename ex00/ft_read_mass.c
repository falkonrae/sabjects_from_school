/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_mass.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:11:05 by amanda            #+#    #+#             */
/*   Updated: 2020/02/16 16:33:44 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		**ft_crtmss(int rows, int columns)
{
	int **arr;
	int i;
	int j;

	i = 0;
	j = 0;
	arr = (int**)malloc(sizeof(int *) * (size_t)(rows + 1));
	while (i < rows)
	{
		arr[i] = (int*)malloc(sizeof(int) * (size_t)(columns + 1));
		while (j < columns)
		{
			arr[i][j] = 0;
			j++;
		}
		arr[i][j + 1] = 0;
		j = 0;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

int		ft_rdargv(char **argv, int r, int c)
{
	int out;
	int j;

	j = 0;
	out = 0;
	while (argv[r + 1] && j < c)
	{
		argv[r + 1]++;
		j++;
	}
	out = *argv[r + 1] - '0';
	return (out);
}

int		**ft_read_mass(char *argv[])
{
	int **arr;
	int i;
	int j;

	i = 0;
	j = 0;
	arr = ft_crtmss(9, 9);
	while (i < 9)
	{
		while (j < 9)
		{
			if (argv[i + 1][j] >= '0' && argv[i + 1][j] <= '9')
			{
				arr[i][j] = (int)(argv[i + 1][j] - (char)48);
			}
			else
				arr[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}
