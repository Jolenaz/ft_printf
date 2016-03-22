/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:10:05 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 18:09:08 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_printf_d(t_stu* stu)
{
	char *str;
	int i;

	if (stu->mod == 0)
		str = ft_strdup(ft_itoa_base((int)va_arg(stu->ap, int),10));
	else if (stu->mod == 1)
		str = ft_strdup(ft_itoa_base((char)va_arg(stu->ap, int),10));
	else if (stu->mod == 2)
		str = ft_strdup(ft_itoa_base((short)va_arg(stu->ap, int),10));
	else
		str = ft_strdup(ft_itoa_base((long)va_arg(stu->ap, int),10));
	if (*str == '-')
		stu->flag = stu->flag & ~ESPFLAG;
	if (stu->width > stu->prcs && stu->width > (int)ft_strlen(str))
	{
		i = stu->width - (stu->prcs > (int)ft_strlen(str) ? stu->prcs : ft_strlen(str));
		if (stu->flag & MOINSFLAG)
		{
			ft_putstr(str);
			while (i)
			{
				ft_putchar(' ');
				i--;
			}
		}
		else
		{
			if ((stu->flag & ZEROFLAG) == 0)
			{
				while (i)
				{
					ft_putchar(' ');
					i--;
				}
				ft_putstr(str);
			}
			else
			{
				ft_putchar('-');
				str++;
				while (i)
				{
					ft_putchar('0');
					i--;
				}
				ft_putstr(str);
			}
		}
	}
	else
	{
		if (stu->flag & ESPFLAG)
			ft_putchar(' ');
		ft_putstr(str);
	}
}
