/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:10:36 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/04 19:24:58 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest_arr;
	unsigned char	*src_arr;
	size_t			i;

	i = 0;
	dest_arr = (unsigned char *)dest;
	src_arr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (len-- > 0)
			dest_arr[len] = src_arr[len];
	}
	else
	{
		while (i < len)
		{
			dest_arr[i] = src_arr[i];
			i++;
		}
	}
	return (dest);
}
