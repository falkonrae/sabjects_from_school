/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:47:53 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/20 14:43:24 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int nb)
{
	int s;
	int f;

	if (nb > 9)
	{
		s = nb / 10;
		f = nb % 10;
		ft_putchar(s + '0');
		ft_putchar(f + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	o;

	i = 0;
	while (i <= 99)
	{
		o = i + 1;
		while (o <= 99)
		{
			print_num(i);
			ft_putchar(' ');
			print_num(o);
			if (i < 98 || o < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			o++;
		}
		i++;
	}
}


int	main(void)
{
	ft_print_comb2();
	return 0;
}

