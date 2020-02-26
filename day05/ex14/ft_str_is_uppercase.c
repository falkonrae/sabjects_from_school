/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:28:20 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:29:09 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char d[] = "sdfshal";
	char f[] = "LIJIJJI";
	printf("%d\n", ft_str_is_uppercase(d));
	printf("%d", ft_str_is_uppercase(f));
	return 0;
}
