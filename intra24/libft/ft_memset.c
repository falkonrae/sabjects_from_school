/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:19:56 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/29 13:34:03 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memset(void *dest, int c, size_t n)
{
	char *p = 
	if (dest != NULL)
	{
		size_t i = 0;
		while (i < n)
		{
			dest = c;
			i++;
		}
	}
}

int main (void) 
{ 
char str[ ] = "Каждый хороший программист должен знать функцию memset!n";
ft_memset(str, 1, 12);
memset(str,'_',12); // заполнить первые 12 байт символом '_'
printf ("%s", str); 
 
return 0; 
}
