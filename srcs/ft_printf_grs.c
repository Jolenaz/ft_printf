/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_grs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 17:16:56 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/25 17:21:15 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static char	*ft_wstr(int *i)
{
	char	*c;
	int		l;

	c = (char*)malloc(sizeof(i));
	l = 0;
	while (*i)
	{
		if (*i <= 127)
		{
			c[l]= (char)(*i);
			l++;
		}

		else if (*i <= 2047)
		{
			c[l] = 192 | (*i >> 6);
			c[l + 1] = 128 | (*i & 63);
			l += 2;
		}
		else if (*i <= 65535)
		{
			c[l] = 224 | (*i >> 12);
			c[l + 1] = 128 | ((*i >> 6) & 63);
			c[l + 2] = 128 | (*i & 63);
			l += 3;
		}
		else
		{
			c[l] = 240 | (*i >> 18);
			c[l + 1] = 128 | ((*i >> 12) & 63);
			c[l + 2] = 128 | ((*i >> 6) & 63);
			c[l + 3] = 128 | (*i & 63);
			l += 4;
		}
		i++;
	}
	c[l] = 0;
	return(c);
}

void		ft_printf_grs(t_stu *stu)
{
	int		*i;
	char	*str;

	i = va_arg(stu->ap, int*);
	str = ft_wstr(i);

	printf("%s",str);
	free(str);
}
