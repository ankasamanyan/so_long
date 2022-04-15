/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:47:15 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/19 02:37:37 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*thingy;

	thingy = malloc(sizeof(t_list));
	if (!thingy)
		return (NULL);
	thingy -> content = content;
	thingy -> next = NULL;
	return (thingy);
}
