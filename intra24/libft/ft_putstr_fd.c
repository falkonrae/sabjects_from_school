/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falkonrae <falkonrae@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:31:48 by falkonrae         #+#    #+#             */
/*   Updated: 2020/11/09 16:37:30 by falkonrae        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		while (*s)
			ft_putchar_fd(*(s++), fd);
	else
		return ;
}