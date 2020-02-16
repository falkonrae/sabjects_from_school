/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:51:26 by amanda            #+#    #+#             */
/*   Updated: 2020/02/11 12:44:02 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int out;
	int s;

	out = 0;
	s = 1;
	if (*str == '\t' || *str == ' ' || *str == '\r' ||
		*str == '\v' || *str == '\f' || *str == '\n')
		return (ft_atoi(++str));
    if (*str == '+')
        str++;
	else if (*str == '-')
	{
		s = -1;
		str++;
	}
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
			out = (out * 10) + ((int)(*str - 48) * s);
		else
			return (out);
		str++;
	}
	return (out);
}
