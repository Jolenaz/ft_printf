/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 16:37:54 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 16:59:46 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(t_stu* stu)
{
	long int i;

	i = (long int)va_arg(stu->ap, unsigned int);
	ft_putstr(ft_itoa_base(i, 10));
}
