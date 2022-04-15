/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:02:45 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/16 18:18:17 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copy(char const *s1, char	*stringy_thingy, size_t	len, size_t	start)
{
	size_t	i;

	i = 0;
	while (i < len)
		stringy_thingy[i++] = s1[start++];
	stringy_thingy[i] = '\0';
	return (stringy_thingy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*stringy_thingy;
	size_t	start;
	size_t	len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	len = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[start]))
	{
		if (s1[start] == '\0')
			return (ft_strdup(""));
		start++;
	}
	while (ft_strchr(set, s1[len]))
		len--;
	len = len - start + 1;
	stringy_thingy = malloc(sizeof(char) * (len + 1));
	if (!stringy_thingy)
		return (NULL);
	return (copy(s1, stringy_thingy, len, start));
}
