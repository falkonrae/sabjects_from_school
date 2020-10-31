/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:39:28 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/31 15:23:23 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p;
	char	*w;
	int		i;

	p = (char*)dst;
	w = (char*)src;
	i = 0;
	while (n > 0)
	{
		p[i] = w[i];
		i++;
		n--;
	}
}
