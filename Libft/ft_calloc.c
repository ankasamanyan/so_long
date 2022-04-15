/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:34:57 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/05 19:32:10 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_thingy;
	size_t	counter_thingy;

	counter_thingy = count * size;
	ptr_thingy = malloc (counter_thingy);
	if (!ptr_thingy)
		return (NULL);
	return (ft_memset (ptr_thingy, 0, counter_thingy));
}
