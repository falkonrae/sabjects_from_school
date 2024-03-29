/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 17:58:02 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/09 22:12:07 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n);
void	ft_putchar(char c);

int		main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(int n)
{
	char a;
	char b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		ft_putchar(a);
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
