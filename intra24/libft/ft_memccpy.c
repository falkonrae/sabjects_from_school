/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:42:41 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/02 18:03:31 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*w;
	unsigned int	i;

	i = 0;
	p = (unsigned char *)dst;
	w = (unsigned char *)src;
	while ((n > 0) && (w[i] != c))
	{
		p[i] = w[i];
		n--;
		i++;
	}
	return (dst);
}
