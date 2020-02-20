/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:28:54 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 21:22:04 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strrev(char *str)
{
	int	i;
	int k;
	int h;

	k = 0;
	i = 0;
	while (str[k] != '\0')
		k++;
	while (i < k / 2)
	{
		h = str[i];
		str[i] = str[k - 1 - i];
		str[k - 1 - i] = h;
		i++;
	}
	return (str);
}

int	main(void)
{
	char sdf[] = "sdfsfaf";
	printf("%s\n", sdf);
	printf("%s", ft_strrev(sdf));
	return 0;
}
		
