/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 14:53:56 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/22 14:29:45 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_printf_s(t_stu* stu)
{
	char *str;
	int i;

	str = ft_strdup(va_arg(stu->ap, char *));
	if ((size_t)stu->prcs <= ft_strlen(str))
	{
		str[stu->prcs] = 0;
	}
	if ((size_t)stu->width >= ft_strlen(str))
	{
		if (stu->width && ((stu->flag & MOINSFLAG) == 0))
		{
			i = stu->width - ft_strlen(str);
			while (i)
			{
				if (stu->flag & ZEROFLAG)
					ft_putchar('0');
				else
					ft_putchar(' ');
				i--;
			}
			ft_putstr(str);
		}
		else if (stu->flag & MOINSFLAG)
		{
			i = stu->width - ft_strlen(str);
			ft_putstr(str);
			while (i)
			{
				ft_putchar(' ');
				i--;
			}
		}
	}
	else
		ft_putstr(str);
	free(str);
}
