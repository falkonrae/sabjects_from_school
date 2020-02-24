/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 11:46:02 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 12:51:30 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	unsigned int		i;
	
	i = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

int		main(void)
{
	int s = 11;
	int l = 11;
	printf("%d", ft_iterative_power(s, l));
	return 0;
}
