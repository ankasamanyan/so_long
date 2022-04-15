/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:40:57 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/02 16:42:45 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' )
		i++;
	return (i);
}

char	*gnl_calloc(int count)
{
	char	*stringy;
	int		i;

	i = 0;
	stringy = malloc (count * sizeof(char));
	if (!stringy)
		return (NULL);
	while (i < count)
		stringy[i++] = '\0';
	return (stringy);
}

char	*gnl_strdup(char *str)
{
	int		strlen;
	char	*stringy;
	int		i;

	i = 0;
	strlen = gnl_strlen(str);
	stringy = gnl_calloc(strlen + 1);
	while (str[i] != '\0')
	{
		stringy[i] = str[i];
		i++;
	}
	stringy[i] = '\0';
	return (stringy);
}

char	*gnl_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if (str[i] == c)
		return (str + i);
	return (NULL);
}

char	*gnl_memmove(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (len-- > 0)
			dest[len] = src[len];
	}
	else
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
