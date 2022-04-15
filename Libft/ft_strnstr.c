/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:35:18 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/11/25 02:18:02 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenl;
	char	*src;

	i = 0;
	src = (char *)big;
	lenl = ft_strlen(little);
	if (lenl == 0 || big == little)
		return (src);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (src[i + j] != '\0' && little[j] != '\0'
			&& src[i + j] == little[j] && i + j < len)
			j++;
		if (j == lenl)
			return (src + i);
		i++;
	}
	return (NULL);
}
