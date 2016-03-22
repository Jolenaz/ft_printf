/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_gru.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 08:29:26 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 08:30:30 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_gru(t_stu* stu)
{
	long int i;

	i = (long int)va_arg(stu->ap, unsigned int);
	ft_putstr(ft_itoa_base(i, 10));
}
