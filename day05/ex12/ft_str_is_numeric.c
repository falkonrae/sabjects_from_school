/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:15:25 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:21:49 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char d[] = "sdfsda2";
	char g[] = "234234";
	printf("%d\n", ft_str_is_numeric(d));
	printf("%d\n", ft_str_is_numeric(g));
	return 0;
}
