/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:57:16 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/01 12:11:35 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
size_t	ft_strlen(const char *s);