/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:33:36 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/07 16:00:17 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *stringy)
{
	int	i;
	int	len;
	int	swap;

	i = 0;
	swap = 0;
	len = ft_strlen(stringy);
	while (len-- > i && stringy[i] != '\0')
	{
		swap = stringy[i];
		stringy[i++] = stringy[len];
		stringy[len] = swap;
	}	
	return (stringy);
}
