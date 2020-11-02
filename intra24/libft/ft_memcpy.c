/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:39:28 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/02 18:03:46 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*w;
	int				i;

	p = (unsigned char *)dst;
	w = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		p[i] = w[i];
		i++;
		n--;
	}
}
