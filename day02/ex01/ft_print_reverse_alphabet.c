/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:21:42 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/09 16:56:37 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		ft_putchar(z);
		z--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
