/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:52:19 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 21:17:01 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncat(char *dest, char *src, int nb)
{
	int i = 0;
	int k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0' && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char sf[8] = "dsslijsg";
	char fds[7] = "LIJfslj";
	printf("%s", ft_strncat(fds, sf, 2));
	return 0;
}
		
