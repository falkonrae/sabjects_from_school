/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:59:05 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/15 15:36:38 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*void	ft_putstr(char *str)
{
int		i;

	i = 0;
	while (str[i] <= '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/
void	unstr(char *rs)
{
	int i = 0;
	while (rs[i] != '\0')
	{
		if ((rs[i] <= 'z') && (rs[i] >= 'a'))
		{
			rs[i] = rs[i] - 32;
			ft_putchar(rs[i]);
		}
		else if ((rs[i] <= 'Z') && (rs[i] >= 'A'))
		{
			rs[i] = rs[i] + 32;
			ft_putchar(rs[i]);
		}
		else
			ft_putchar(rs[i]);
		i++;
	}
}


int		main(int argc, char **argv)
{
	int i = 1;
	while (i < argc)
	{
		unstr(argv[i]);
		i++;
	}
	return 0;
}
