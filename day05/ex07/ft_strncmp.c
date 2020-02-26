/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:18:11 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 18:41:41 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	if (((s1[i] == '\0' && s2[i] != '\0') || (s2 == '\0' && s1[i] != '\0')) && i < n)
			return (s1[i] - s2[i]);
	}
	return (0);
}


int		main(void)
{
	char s[] = "fsdf";
	char f[] = "ffof";
	printf("%d", ft_strncmp(s, f, 2));
	return 0;
}
