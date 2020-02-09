/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:57:10 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/09 17:49:24 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putchar(char c);

int		main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	char a;
	char z;

	z = 'z';
	a = 'a';
	while (a <= z)
	{
		ft_putchar(a);
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
