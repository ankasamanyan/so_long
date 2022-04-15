/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:02:33 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/17 22:58:27 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	lena;
	size_t	lenb;
	char	*stringy;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	lena = ft_strlen(s1);
	lenb = ft_strlen(s2);
	stringy = ft_calloc(lena + lenb + 1, sizeof(char));
	if (!stringy)
		return (NULL);
	ft_memcpy(stringy, s1, lena);
	ft_memcpy(stringy + lena, s2, lenb);
	return (stringy);
}
