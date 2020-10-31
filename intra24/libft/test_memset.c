/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjacob <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:19:56 by vjacob            #+#    #+#             */
/*   Updated: 2020/10/30 14:59:52 by vjacob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memset(void *dest, int c, size_t n);
int main (void) 
{ 
char str[ ] = "Каждый хороший программист должен знать функцию memset\n";
memset(str,'_',12); // заполнить первые 12 байт символом '_'
printf ("%s", str); 

int strin[ ] = {3,346,463,34,4,5,5};
memset(strin,'_',5); // заполнить первые 12 байт символом '_'
printf ("%s", strin); 
 
char stroka[ ] = "Каждый хороший программист должен знать функцию memset\n";
ft_memset(stroka, '?', 12);
printf ("%d", stroka); 
return 0; 
}
void *ft_memset(void *dest, int c, size_t n)
{
	char *p = (char *)dest; 
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (dest);
}

