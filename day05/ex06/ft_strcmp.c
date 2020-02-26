/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:04:27 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 18:15:05 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i] && s1[i] == '\0')
		return (0);
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

int		main(void)
{
	char s[] = "ma";
	char d[] = "lb";
	printf("%d", ft_strcmp(s, d));
	return 0;
}
