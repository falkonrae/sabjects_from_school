/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:38:23 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/26 18:54:16 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	fr_swap(int *a, int *b);

void	display(int argc, char **argv)
{
	int k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
}

int		main(int argc, char **argv)
{
	int i = 1;
	char *b;
	while (i < argc)
	{
		if (i + 1 < argc && ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			b = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = b;
			i = 0;
		}
		i++;
	}
	display(argc, argv);
	return 0;
}
