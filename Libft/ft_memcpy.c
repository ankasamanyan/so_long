/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 02:28:54 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/03 02:35:01 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest_arr;
	unsigned char	*src_arr;

	i = 0;
	dest_arr = (unsigned char *)dest;
	src_arr = (unsigned char *)src;
	while (i < len)
	{
		dest_arr[i] = src_arr[i];
		i++;
	}
	return (dest);
}
