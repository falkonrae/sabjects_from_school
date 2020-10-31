/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:30:37 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/31 15:19:27 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	char *p;

	p = (char *)dest;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (dest);
}
