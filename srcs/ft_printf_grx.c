/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_grx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:46:29 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 12:02:38 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr_upper(char *str)
{
	char *c;

	c = str;
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			ft_putchar((*c) - 32);
		else
			ft_putchar(*c);
		c++;
	}
}

void		ft_printf_grx(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0X");
	if (stu->mod == 1)
		ft_putstr_upper(ft_itoa_base_ul((unsigned char)va_arg(stu->ap, unsigned int),16));
	else if (stu->mod == 2)
		ft_putstr_upper(ft_itoa_base_ul((unsigned short)va_arg(stu->ap, unsigned int),16));
	else if (stu->mod == 0)
		ft_putstr_upper(ft_itoa_base_ul((unsigned int)va_arg(stu->ap, unsigned int),16));
	else
		ft_putstr_upper(ft_itoa_base_ul((unsigned long)va_arg(stu->ap, unsigned long),16));
}
