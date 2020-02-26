/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:54:28 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/26 19:14:23 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_sort_ascii(int arc, char **arv)
{
	int i = 1;
	int j;
	char *tmp;
	while (i < arc - 1)
	{
		j = 0;
		while (arv[i][j] == arv[i+1][j])
			j++;
		if (arv[i][j] > arv[i+1][j])
		{
			tmp = arv[i];
			arv[i] = arv[i+1];
			arv[i+1] = tmp;
			i = 0;
		}
		i++;
	}
}

void	ft_print(int ac, char **av)
{
	int k = 1;
	while (k < ac)
	{
		ft_putstr(av[k]);
		ft_putchar('\n');
		k++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_ascii(argc, argv);
	ft_print(argc, argv);
	return 0;
}
