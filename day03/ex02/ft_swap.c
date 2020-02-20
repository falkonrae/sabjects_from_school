/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:50:52 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 19:11:53 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		l;

	l = *a;
	*a = *b;
	*b = l;
}

int	main(void)
{
	int *as; 
	int *bs;
	int a = 444;
	int b = 32;

    bs = &b;
	as = &a;
	ft_swap(as, bs);
	printf("a = %d and b = %d", a, b);
	return 0;
}
