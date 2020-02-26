/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:43:02 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 14:11:16 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}


int		main(void)
{
	char	g[] = "sdfdgbdbsdsdsdsdf";
	char 	s[] = "ferfhfffnfnt";
//	strcpy(s, g);
//	printf("%s\n", strcpy(s, g));
	ft_strcpy(s, g);
	printf("%s", s);
	return 0;
}
