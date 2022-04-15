/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:19:04 by ankasamanya       #+#    #+#             */
/*   Updated: 2021/12/14 17:46:35 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*stringy;
	int		i;
	int		len;

	i = 0;
	len = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	stringy = malloc(sizeof(char) * (len + 1));
	if (!stringy)
		return (NULL);
	stringy[len] = '\0';
	if (n < 0)
	{
		n *= -1;
		stringy[0] = '-';
		i = 1;
	}
	while (i < len--)
	{
		stringy[len] = n % 10 + '0';
		n /= 10;
	}
	return (stringy);
}
