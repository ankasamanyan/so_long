/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:08:59 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/08 23:46:30 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (len < destlen)
		return (srclen + len);
	if (len == 0)
		return (srclen);
	i = destlen;
	while (src[j] != '\0' && i < len - 1)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
