/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:37:57 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 12:00:30 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0x");
	if (stu->mod == 1)
		ft_putstr(ft_itoa_base_ul((unsigned char)va_arg(stu->ap, unsigned int),16));
	else if (stu->mod == 2)
		ft_putstr(ft_itoa_base_ul((unsigned short)va_arg(stu->ap, unsigned int),16));
	else if (stu->mod == 0)
		ft_putstr(ft_itoa_base_ul((unsigned int)va_arg(stu->ap, unsigned int),16));
	else
		ft_putstr(ft_itoa_base_ul((unsigned long)va_arg(stu->ap, unsigned long),16));
}
