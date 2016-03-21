/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_o.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:00:15 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 16:01:17 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_o(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0");
	ft_putstr(ft_itoa_base((long int)va_arg(stu->ap, void *),8));
}
