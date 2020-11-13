/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:25:30 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/13 17:59:32 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		o;
	int		res;
	int		minus;

	o = 0;
	res = 0;
	minus = 0;
	while (str[o] == ' ' || str[o] == '\n' || str[o] == '\t' ||
			str[o] == '\r' || str[o] == '\v' || str[o] == '\f')
		o++;
	if (str[o] == '-' && str[o + 1] != '-' && str[o + 1] != '+')
	{
		minus = 1;
		o++;
	}
	if (str[o] == '+' && str[o + 1] != '-' && str[o + 1] != '+')
		o++;
	while ((str[o] >= '0') && (str[o] <= '9'))
	{
		if ((res * 10) < res)
		{
			if (minus < 1)
				return (0);
			else 
				return (-1);
		}
		res = 10 * res + str[o] - '0';
		o++;
	}
	if (minus == 1)
		res = -res;
	return (res);
}
