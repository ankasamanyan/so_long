/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:48 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/03 23:25:34 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(char str, va_list *args)
{
	int	count;

	count = 0;
	if (str == '%')
		count += printchar('%');
	else if (str == 'c')
		count += printchar(va_arg(*args, int));
	else if (str == 's')
		count += printstr(va_arg(*args, char *));
	else if (str == 'i' || str == 'd')
		count += printnbr(va_arg(*args, int));
	else if (str == 'u')
		count += printu(va_arg(*args, unsigned int));
	else if (str == 'x')
		count += printx(va_arg(*args, unsigned int), 0);
	else if (str == 'X')
		count += printx(va_arg(*args, unsigned int), 1);
	else if (str == 'p')
		count += printp(va_arg(*args, void *));
	return (count);
}

int	ft_printf(const char *stringy, ...)
{
	va_list	args;
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, stringy);
	while (stringy[i] != '\0')
	{
		if (stringy[i] == '%')
		{
			count += check(stringy[i + 1], &args);
			i += 2;
		}
		else
		{
			count += printchar(stringy[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	ft_printf("asdfghjkl; %s %i", "qwerty", 123);
// 	return 0;
// }
