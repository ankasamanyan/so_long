/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:44:35 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/02/16 19:10:56 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	puthex(unsigned long long num, int upper)
{
	if (num >= 16)
	{
		printx(num / 16, upper);
		printx(num % 16, upper);
	}
	else
	{
		if (num < 10)
			printnbr(num);
		else
		{
			if (upper == 0)
				printchar('a' + num - 10);
			else if (upper == 1)
				printchar('A' + num - 10);
		}
	}
}

int	printx(unsigned long long num, int upper)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		puthex(num, upper);
	return (counthex(num));
}
