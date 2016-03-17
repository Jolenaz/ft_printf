/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:14:41 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/17 16:48:54 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void ft_read(const char *str, t_stu *stu)
{
	char *c = (char *)str;
	int i = 0;

	while (*c)
	{
		if (*c == '%' && *(c + 1) != '%' && *(c + 1))
			i++;
		else if (*c == '%' && *(c + 1) == '%')
			c++;
		c++;
	}
	stu->nb = i;
}

int	ft_printf(const char *str, ...)
{
	t_stu stu;
	ft_read(str, &stu);
	printf("nb de %% =  %d\n",stu.nb);
	
	return (0);
}
