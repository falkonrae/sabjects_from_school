/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:21:05 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/11 07:17:26 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_put_pos(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
		ft_put_pos(nb);
	}
	else
	{
		ft_put_pos(nb);
	}
}

void	ft_put_pos(int nb)
{
	unsigned int	nb1;

	nb1 = (unsigned int)nb;
	if (nb1 >= 0 && nb1 < 10)
	{
		ft_putchar(nb1 + '0');
	}
	else if (nb1 > 9)
	{
		ft_put_pos(nb1 / 10);
		ft_put_pos(nb1 % 10);
	}
}
