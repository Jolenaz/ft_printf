/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:00:08 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/25 09:58:43 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(t_stu* stu)
{
	int		i;

	if (stu->let == -2000000000)
		(stu->let = va_arg(stu->ap, int));
	if ((size_t)stu->width)
	{
		if (stu->width && ((stu->flag & MOINSFLAG) == 0))
		{
			i = stu->width - 1;
			while (i)
			{
				if (stu->flag & ZEROFLAG)
					ft_putchar('0');
				else
					ft_putchar(' ');
				i--;
			}
			ft_putchar(stu->let);
		}
		else if (stu->flag & MOINSFLAG)
		{
			i = stu->width - 1;
			ft_putchar(stu->let);
			while (i)
			{
				ft_putchar(' ');
				i--;
			}
		}
	}
	else
		ft_putchar(stu->let);
	stu->let = -2000000000;
}
