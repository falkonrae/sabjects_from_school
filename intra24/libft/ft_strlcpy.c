/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:35:02 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/02 18:03:27 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	int i;

	i = 0;
	while ((src[i] != '\0') && (dstsize > 0))
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	return (*dst);
}
