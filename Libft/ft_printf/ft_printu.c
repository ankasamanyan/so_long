/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:03:23 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/03/29 21:00:42 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printu(unsigned long long num)
{
	int		count;
	char	c;

	count = intlen(num);
	if (num >= 10)
	{
		printu(num / 10);
		printu(num % 10);
	}
	else if (num < 10)
	{
		c = num + '0';
		printchar(c);
	}
	return (count);
}	
