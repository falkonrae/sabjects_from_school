/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:32:38 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/25 19:48:08 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		while ((str[i] == ' ') || (str[i] == '-' || str[i] == '+'))
		{
			if (str[i + 1] >= 'a' && str[i - 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		i++;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(s));
	return 0;
}
		
