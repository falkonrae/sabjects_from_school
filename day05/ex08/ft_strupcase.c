/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:49:15 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 19:11:12 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] <= 'z' && str[i] >= 'a')
	{
		str[i] = str[i] - 32;
		i++;
	}
	if (str[i] >= 'A' && str[i] <= 'Z')
		ft_strupcase(&str[i+1]);
	return (str);
}

int		main(void)
{
	char s[] = "fsdsFLJksdfs";
	printf("%s", ft_strupcase(s));
	return 0;
}
