/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:34:55 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/13 16:09:45 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_of_s(char const *s, char c)
{
	int		size;

	size = 0;
	if (s == '\0')
		return (1);
	while (*s)
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

static size_t	size_of_string(char const *s, char c, size_t count)
{
	unsigned int		size;
	int					i;

	i = count;
	size = 0;
	while (s[i] == c && *s)
	{
		i++;
	}
	while (s[i] != c && (s[i]))
	{
		size++;
		i++;
	}
	return (size);
}

static void		**free_array(char **array)
{
	while (*array != NULL)
	{
		free(*array);
		array++;
	}
	free(array);
	return (NULL);
}

static size_t	jump_to(char *s_new, char c, size_t count)
{
	while (s_new[count] != c && s_new[count])
	{
		s_new[count]++;
		count++;
	}
	while (s_new[count] == c && s_new[count])
	{
		s_new[count]++;
		count++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char		**array;
	size_t		size;
	char		*s_new;
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	s_new = ft_strtrim(s, &c);
	if (s_new == '\0')
		return (NULL);
	size = size_of_s(s, c);
	if ((array = (char **)malloc(sizeof(char *) * (size + 1))) == NULL)
		return (NULL);
	while (size > 0)
	{
		array[i] = ft_substr(s_new, count, size_of_string(s_new, c, count));
		if (*array == NULL)
			return (*free_array(array));
		count = jump_to(s_new, c, count);
		size--;
		i++;
	}
	array[i] = NULL;
	return (array);
}
