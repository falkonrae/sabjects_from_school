/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:41:42 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 19:52:44 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}

int	main(void)
{
	int *d;
	int *c;
	int g = 31;
	int k = 5;

	d = &g;
	c = &k;
	ft_ultimate_div_mod(d, c);
	printf("%d is mod and %d is div", k, g);
	return 0;
}
