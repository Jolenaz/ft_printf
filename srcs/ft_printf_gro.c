/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_gro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 08:19:58 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 08:22:18 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_gro(t_stu* stu)
{
	if (stu->flag & DIESFLAG)
		ft_putstr("0");
	ft_putstr(ft_itoa_base((long int)va_arg(stu->ap, unsigned int),8));
}
