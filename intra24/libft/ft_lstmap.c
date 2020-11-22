/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falkonrae <falkonrae@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:21:50 by vjacob            #+#    #+#             */
/*   Updated: 2020/11/22 09:07:32 by falkonrae        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new_list;
// 	t_list *save;

// 	if (!lst || !f || !del)
// 		return (0);
// 	new_list = ft_lstnew(f(lst->content));
// 	if (!new_list)
// 		return (0);
// 	save = new_list;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		new_list->next = ft_lstnew(f(lst->content));
// 		if (!new_list->next)
// 		{
// 			ft_lstclear(&save, del);
// 			return (0);
// 		}
// 		new_list = new_list->next;
// 		lst = lst->next;
// 	}
// 	new_list->next = NULL;
// 	return (save);
// }
//---------------------------------------------------------------------------

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *new_list;
// 	t_list *save;

// 	if (!lst || !f || !del)
// 		return (0);
// 	new_list = ft_lstnew(f(lst->content));
// 	if (!new_list)
// 		return (0);
// 	save = new_list;
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		new_list->next = ft_lstnew(f(lst->content));
// 		if (!new_list->next)
// 		{
// 			ft_lstclear(&save, del);
// 			return (0);
// 		}
// 		new_list = new_list->next;
// 		lst = lst->next;
// 	}
// 	new_list->next = NULL;
// 	return (save);
// }

//----------------------------------------------------------------------
// t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
// {
// 	t_list		*new;
// 	t_list		*list;

// 	if (!lst)
// 		return (NULL);
// 	list = f(lst);
// 	new = list;
// 	while (lst->next)
// 	{
// 		lst = lst->next;
// 		if (!(list->next = f(lst)))
// 		{
// 			free(list->next);
// 			return (NULL);
// 		}
// 		list = list->next;
// 	}
// 	return (new);
// }