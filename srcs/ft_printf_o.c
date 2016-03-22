/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:00:15 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 12:00:53 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_o(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0");
	if (stu->mod == 1)
		ft_putstr(ft_itoa_base_ul((unsigned char)va_arg(stu->ap, unsigned int),8));
	else if (stu->mod == 2)
		ft_putstr(ft_itoa_base_ul((unsigned short)va_arg(stu->ap, unsigned int),8));
	else if (stu->mod == 0)
		ft_putstr(ft_itoa_base_ul((unsigned int)va_arg(stu->ap, unsigned int),8));
	else
		ft_putstr(ft_itoa_base_ul((unsigned long)va_arg(stu->ap, unsigned long),8));

}
