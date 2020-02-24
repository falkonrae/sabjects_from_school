/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:00:34 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 16:40:16 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		sqrt;

	if (nb < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}

int	main(void)
{
	int	mn = 144;
	printf("%d", ft_sqrt(mn));
	return 0;
}
