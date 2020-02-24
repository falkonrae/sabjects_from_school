/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:25:10 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 14:02:27 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index <= 1)
		return (index);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}


int		main(void)
{
	int sdf = 6;

	printf("%d", ft_fibonacci(sdf));
	return 0;
}
