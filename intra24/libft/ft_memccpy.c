/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:42:41 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/31 17:30:51 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*p;
	char	*w;
	char	*pointer;
	int		i;

	i = 0;
	pointer = (char *)c;
	p = (char *)dst;
	w = (char *)src;
	while (n > 0 && src[i] != c)
	{
		dst[i] = src[i];
		n--;
		i++;
	}
}
