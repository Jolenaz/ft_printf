/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_grx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 15:46:29 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 15:59:53 by jbelless         ###   ########.fr       */
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
	ft_putstr_upper(ft_itoa_base((long int)va_arg(stu->ap, void *),16));
}
