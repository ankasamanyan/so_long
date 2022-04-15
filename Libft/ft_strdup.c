/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:36:00 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/06 16:26:27 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*stringy;
	int		strlen;
	int		i;

	i = 0;
	strlen = ft_strlen (str);
	stringy = malloc(sizeof(char) * (strlen + 1));
	if (!stringy)
		return (NULL);
	while (str[i] != '\0')
	{
		stringy[i] = str[i];
		i++;
	}
	stringy[i] = '\0';
	return (stringy);
}
