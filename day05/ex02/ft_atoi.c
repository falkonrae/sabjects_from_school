/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:34:57 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 21:41:53 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		minus = 1;
	int		res;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '+')
			str++;
		if (*str == '-')
		{
			minus = -1;
			str++;
		}
		if (*str <= '9' && *str >= '0')
		{	
			res = res * 10 + *str - '0';
			str++;
		}
	}
	return (res * minus);
}


int		main(void)
{
	printf("%d", ft_atoi("2342"));
	return 0;
}

