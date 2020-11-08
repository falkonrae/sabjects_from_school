/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:14:52 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/08 14:27:26 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char 	**array[][];
	size_t 	i;
	
	if (*s == 0 || c == 0)
		return (NULL);
	array = (char **)malloc(sizeof(s));
	if (new == NULL || new1 == NULL) 
		return (NULL);
	while (s)
	{
		if (*s == c)
			s++;
		*new++ = *s++;
		
	}
	while (s)
		*new1++ = *s++;
	*array = [new, new1];
	free (new);
	free (new1);
	return (array);
}
