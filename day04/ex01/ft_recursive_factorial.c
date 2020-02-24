/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:23:10 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 11:38:20 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}

int	main()
{
	int e;
	int s;
	int f;
	
	e = ft_recursive_factorial(24);
	s = ft_recursive_factorial(11);
	f = ft_recursive_factorial(4);


	printf( "%d\n", e);
	printf( "%d\n", s);
	printf( "%d\n", f);
	return 0;
}
