/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:02:58 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/16 18:23:31 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 1;
	if (s[0] == c || ft_strlen(s) == 0)
		wcount = 0;
	while (s[i] != '\0')
	{	
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
			wcount++;
		i++;
	}
	return (wcount);
}

static char	**ft_warr(char	**words, char const *s, size_t wcount, char c)
{
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	start = 0;
	while (i < wcount)
	{
		len = 0;
		while (s[start + len] == c)
			start++;
		while (s[start + len] != c && (s[start + len] != '\0'))
			len++;
		if (len > 0)
			words[i] = ft_substr(s, start, len);
		start += len;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**stringyofstringy;
	size_t	wcount;

	if (!s)
		return (NULL);
	wcount = ft_wcount(s, c);
	stringyofstringy = (char **)(ft_calloc((wcount + 1), sizeof(char *)));
	if (stringyofstringy == NULL)
		return (NULL);
	stringyofstringy = ft_warr(stringyofstringy, s, wcount, c);
	return (stringyofstringy);
}
