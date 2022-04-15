/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:40:32 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/03 23:23:13 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>

# include <stdarg.h>

int	ft_printf(const char *stringy, ...);
int	printchar(char c);
int	printstr(const char *s);
int	printnbr(int n);
int	intlen(long long n);
int	printu(unsigned long long num);
int	printx(unsigned long long num, int upper);
int	counthex(unsigned long long num);
int	printx(unsigned long long num, int upper);
int	printp(void *ptr);

#endif