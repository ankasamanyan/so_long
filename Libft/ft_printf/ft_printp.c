/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:21:31 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/03/29 21:00:37 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printp(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += printstr("0x0");
	else
	{
		count += printstr("0x");
		count += printx(((unsigned long long int)ptr), 0);
	}
	return (count);
}
