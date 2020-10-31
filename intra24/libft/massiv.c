/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   massiv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:32:10 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/30 16:33:01 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int mass[] = {4,2,5,7,3,8,3,5};
	char mix[] = "Everyday I'm shaffeling";
	int *point = mass;
	char *strin = mix;
	printf("%s", strin);
	printf("\n");
	while (*point)
	{	
		printf("%d ", *point);
		point++;
	}
	return 0;
}
