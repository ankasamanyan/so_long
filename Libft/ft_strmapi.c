/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:33:14 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/09 20:33:42 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	int		i;
	int		len;
	char	*czary;

	i = 0;
	len = ft_strlen(s);
	czary = malloc(sizeof(char) * (len + 1));
	if (!czary || !s)
		return (NULL);
	while (i < len)
	{
		czary[i] = f(i, s[i]);
		i++;
	}
	czary[i] = '\0';
	return (czary);
}
