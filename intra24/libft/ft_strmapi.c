/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falkonrae <falkonrae@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:53:33 by falkonrae         #+#    #+#             */
/*   Updated: 2020/11/09 16:05:53 by falkonrae        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *str;
    unsigned int    i;

    str = (char *)malloc(sizeof(*s)* (ft_strlen(s) + 1));
    if (str == NULL)
        return (NULL);
    while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}