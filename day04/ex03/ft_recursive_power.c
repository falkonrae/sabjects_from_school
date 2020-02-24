/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:53:07 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 13:17:57 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

int		main(void)
{
	int ss = 2;
	int sd = 3;
	printf("%d", ft_recursive_power(ss, sd));
	return 0;
}
