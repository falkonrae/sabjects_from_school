/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:34:55 by falkonrae         #+#    #+#             */
/*   Updated: 2020/11/12 17:52:33 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	size_of_s(char const *s, char c)
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

unsigned int		size_of_string(char const *s, char c, size_t count)
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
/*
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
*/

size_t  jump_to(char *s_new, char c, size_t count)
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
/*
char	**ft_split(char const *s, char c)
{
	char			**array;
	size_t			size;
	char			*s_new;
	unsigned int	count;
	int				i;

	count = 0;
	i = 0;
	s_new = ft_strtrim(s, &c);
	// if (s_new == '\0')
	// 	return (NULL);
	size = size_of_s(s, c);
	array = (char **)malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);
	while (size > 0)
	{
		array[i] = ft_substr(s_new, count, size_of_string(s_new, c, count));
		if (*array == NULL)
		//	return (*free_array(array));
		count = jump_to(s_new, c, count);
		size--;
		i++;
	}
	array[i] = NULL;
	return (array);
}
*/
int main()
{
	char 	*str = "  цшустb кы грдь л вао вапв  35е3у  ";
	char 	c = ' ';
	char 	**arr;
	char *s_new;
	size_t			size;
	size_t	count;
	size_t i = 0;
	size_t j = 0;

	count = 0;
	size = size_of_s(str, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
//	arr = ft_split(str, c);
	s_new = ft_strtrim(str, &c);
	printf("s_new = <%s>\n", s_new);
	if (s_new == '\0')
		return (0);
	printf("s_new_size = %zu\n", ft_strlen(s_new));
	
	while (size > 0)
	{
		printf("size = %zu\n", size);
		arr[i] = ft_substr(s_new, count, size_of_string(s_new, c, count));
		printf("<%s>\n", arr[i]);
		//if (*array == NULL)
		//	return (free_array(array));
		count = jump_to(s_new, c, count);
		printf("count = %zu\n", count);
		size--;
		i++;
	}
	arr[i] = NULL;
	
	while (arr[j])
	{
		printf("<%s>\n", arr[j]);
		j++;
	}
	return (0);
} 

/*
int main()
{
	char 	*str = "          ";
	char 	c = ' ';
	char 	**arr;

	arr = (char **)malloc(sizeof(char *) * 7);
	arr = ft_split(str, c);
	while (arr)
	{
		printf("%s", *arr);
		arr++;
	}
	return (0);
} */