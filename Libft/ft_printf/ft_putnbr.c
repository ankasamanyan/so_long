/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:05:43 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/14 14:03:42 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printnbr(int n)
{
	int		count;
	char	c;

	count = intlen(n);
	if (n == -2147483648)
		printstr("-2147483648");
	else if (n < 0)
	{
		printchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		printnbr(n / 10);
		printnbr(n % 10);
	}
	else if (n < 10 && n != -2147483648)
	{
		c = n + '0';
		printchar(c);
	}
	return (count);
}
