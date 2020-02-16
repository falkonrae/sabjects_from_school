/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:54:45 by amanda            #+#    #+#             */
/*   Updated: 2020/02/16 16:32:49 by amanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_read_mass(char *argv[]);

void	ft_print_mass(int **arr);

int		main(int argc, char *argv[])
{
	int **arr;
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 10)
	{
		arr = ft_read_mass(argv);
		ft_print_mass(arr);
	}
	return (0);
}
