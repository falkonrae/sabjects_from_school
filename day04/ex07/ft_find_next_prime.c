/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:48:41 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 20:54:32 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i != 0 && i < nb)
		i++;
	if (nb == i)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		minus;

	minus = 1;
	i = 0;
	res = 0;
	while (str[i] != '\0')
	{	
		while (str[i] == ' ' || str[i] == '+' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] == '-')
			minus = -1;
		while (str[i] <= '9' && str[i] >= '0')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	}
	return (res * minus);
}

int		main(int argc, char **argv)
{
	int	i;
	
	i = 1;
	
	while (i < argc)
	{
		printf("%d  ", ft_find_next_prime(ft_atoi(argv[i])));
		i++;
	}
	return 0;
}


