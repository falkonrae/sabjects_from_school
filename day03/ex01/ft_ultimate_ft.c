/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 20:01:05 by vjacob            #+#    #+#             */
/*   Updated: 2020/02/08 12:59:28 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_ultimate_ft(int		*********nbr);


int 	main(void)
{
	int		d;
	int 	*nbr = &d;
	int		**nbr2= &nbr;
	int		***nbr3= &nbr2;
	int 	****nbr4= &nbr3;
	int		*****nbr5= &nbr4;
	int 	******nbr6= &nbr5;
	int 	*******nbr7= &nbr6;
	int		********nbr8= &nbr7;
	int		*********nbr9= &nbr8;
	ft_ultimate_ft(nbr9);
	printf("%d", d);
	return 0;


}


void		ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
