/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:33:23 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:36:49 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char d[] = "sdfshal";
	char f[] = "LIJkssdf";
	printf("%d\n", ft_str_is_printable(d));
	printf("%d", ft_str_is_printable(f));
	return 0;
}
