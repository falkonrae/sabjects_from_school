/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:12:41 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 19:40:56 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int ar = 31;
	int dd = 5;
	int *div;
	int *mod;
	int a;
	int b;

	div = &a;
	mod = &b;
	ft_div_mod(ar, dd, div, mod);
	printf("%d ", a);
	printf("%d", b);
	return 0;
}
