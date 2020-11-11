/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:34:55 by falkonrae         #+#    #+#             */
/*   Updated: 2020/11/11 20:12:39 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_of_s(char const *s, char c)
{
	int		size;

	size = 0;
	while (s)
	{
		if (*s == c)
			s++;
		else
		{
			size++;
			while (*s && *s != c)
				s++;
		}
	}
	return (size);
}

unsigned int		size_of_string(char const *s, char c, unsigned int count)
{
	unsigned int		size;
	int					i;

	i = count;
	size = 0;
	while (s[i] == c && *s)
	{
		i++;
	}
	while (s[i] != c && *s)
	{
		size++;
		i++;
	}
	return (size);
}

static void				*free_array(char **array)
{
	while (*array != NULL)
	{
		free(*array);
		array++;
	}
	free(array);
	return (NULL);
}


size_t  jump_to(char *s_new, char c)
{
	size_t i;

	i = 0;
	while (*s_new != c && *s_new)
	{
		s_new++;
		i++;
	}
	while (*s_new == c && *s_new)
	{
		s_new++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	size_t			size;
	char			*s_new;
	unsigned int	count;

	count = 0;
	s_new = ft_strtrim(s, &c);
	if (s_new == NULL)
		return (NULL);
	size = size_of_s(s, c);
	array = malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);
	while (size > 0)
	{
		*array = ft_substr(s_new, count, size_of_string(s_new, c, count));
		if (*array == NULL)
			return (free_array(array));
		count = count + jump_to(s_new, c);
		size--;
		array++;
	}
	return (array);
}
