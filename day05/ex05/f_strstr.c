/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   awelf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:02:32 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 17:22:05 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		j;

	k = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = i;
			while (to_find[k] != '\0' && str[j] == to_find[k])
			{
				j++;
				k++;
			}
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return 0;
}

int		main(void)
{
	char *a = "motherfucker";
	char *d = "fuck";
	char *s = ft_strstr(a, d);
	printf("%s", s);
	return 0;
}
