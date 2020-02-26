/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:53:09 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:14:54 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	unsigned int	i = 0;
	while (str[i] != '\0') 
	{		
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return 0;
		i++;
	}
	return 1;
}

int		main(void)
{
	char s[] = "Sfsfsdfs";
	char g[] = "sffsfs2df";
	printf("%d\n", ft_str_is_alpha(s));
	printf("%d", ft_str_is_alpha(g));
	return 0;
}
