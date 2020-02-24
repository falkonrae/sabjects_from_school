/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 21:15:12 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/24 21:34:33 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	put_pos(int f)
{
	unsigned int x;

	x = (unsigned int)f;
	if (x >= 0 && x <= 9)
		ft_putchar(x + '0');
	if (x > 9)
	{
		put_pos(x / 10);
		put_pos(x % 10);
	}
}
	
void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		put_pos(nb);
	}
	else
		put_pos(nb);
}

