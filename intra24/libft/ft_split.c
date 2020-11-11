/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falkonrae <falkonrae@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:34:55 by falkonrae         #+#    #+#             */
/*   Updated: 2020/11/11 13:26:38 by falkonrae        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char    *split_process(char **array, char *s_new, char c)
{
    char    *buf; // Здесь сам процесс сплита
    size_t  i;
    
    i = 0;  
    buf = ft_strtrim(s_new, &c);
    while (buf && s_new[i] != c)
    {
        *array[i] = s_new[i];
        i++;
    }
    *array[i] = '\0';
    return (*array);
}   
   
char    **ft_split(char const *s, char c)
{
    char    *s_new;
    char    **array;
    int     size;
    
    size = 0;
    while (s) // Тут я считаю, сколько строк получится в массиве
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
    s_new = (char *)s;
    array = (char**)malloc(sizeof(char *) * (size + 1));
    if (array == NULL)
    {
        free (array);
        return (NULL);
    }
    while (size > 0)
    {
        *array = split_process(array, s_new, c);
        size--;
        array++;
        s_new = ft_substr(s_new, i, (ft_strlen(s_new) - ft_strlen(*array)));
    }
    return (array);   
}*/

static int	r_size(char const *s,  char c)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			++len;
			while (*s && *s == c)
				++s;
		}
	}
	return (len);
}

char 		**ft_split(char const *s, char c)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s, c) + 1))))
    {
        	free (r);
            return (0);
    }
	
	while (s[i] && j < r_size(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
		{
            free(r[j]);
            return (0);
        }	
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}










/*#include <stdlib.h>

int	ft_isspace(char c)
{
	return ((c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0);
}

static int	r_size(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{
		if (ft_isspace(*s))
			++s;
		else
		{
			++len;
			while (*s && !ft_isspace(*s))
				++s;
		}
	}
	return (len);
}

char 		**ft_split(char *s)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s) + 1))))
		return (0);
	while (s[i] && j < r_size(s))
	{
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (s[i] && !ft_isspace(s[i]))
		{
			w_len++;
			i++;
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (0);
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	return (r);
}
		*/