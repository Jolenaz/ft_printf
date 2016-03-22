/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:10:05 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 11:53:26 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_printf_d(t_stu* stu)
{
	if (stu->mod == 0)
		ft_putstr(ft_itoa_base((int)va_arg(stu->ap, int),10));
	else if (stu->mod == 1)
		ft_putstr(ft_itoa_base((char)va_arg(stu->ap, int),10));
	else if (stu->mod == 2)
		ft_putstr(ft_itoa_base((short)va_arg(stu->ap, int),10));
	else
		ft_putstr(ft_itoa_base((long)va_arg(stu->ap, long),10));
}
