/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:42:03 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 20:51:46 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char s[] = "sdfsds";
	char f[] = "GDLSG";
	printf("%s", ft_strcat(s, f));
	return 0;
}

