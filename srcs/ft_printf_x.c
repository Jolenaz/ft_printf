/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:37:57 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 15:45:39 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0x");
	ft_putstr(ft_itoa_base((long int)va_arg(stu->ap, void *),16));
}
