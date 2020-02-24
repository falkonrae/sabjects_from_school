/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:07:04 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/21 10:22:40 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb > 12 || nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

int	main()
{
	int nb = 34;
	int hb = 3;
	printf("%d", ft_iterative_factorial(nb));
	printf("%d", ft_iterative_factorial(hb));
	return 0;
}
