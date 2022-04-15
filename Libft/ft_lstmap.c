/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 02:16:47 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/19 15:01:07 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_thingy;

	if (!lst || !f || !del)
		return (NULL);
	list_thingy = ft_lstnew(f(lst->content));
	while (lst != NULL)
	{
		list_thingy->next = lst->next;
		if (list_thingy->next == NULL)
			ft_lstdelone(list_thingy, del);
		list_thingy = ft_lstnew(f(lst->content));
		lst = lst->next;
	}
	return (list_thingy);
}
