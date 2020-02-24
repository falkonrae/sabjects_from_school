/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:42:58 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 18:47:53 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	while (nb % i != 0 && i < nb)
		i++;
	if (nb == i)
		return (1);
	return (0);
}

int		main(void)
{
	int df = 31;
	printf("%d", ft_is_prime(df));
	return 0;
}
