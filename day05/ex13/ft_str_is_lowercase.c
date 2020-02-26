/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:22:17 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:25:27 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	unsigned int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char d[] = "sdfshal";
	char f[] = "LIJkssdf";
	printf("%d\n", ft_str_is_lowercase(d));
	printf("%d", ft_str_is_lowercase(f));
	return 0;
}
