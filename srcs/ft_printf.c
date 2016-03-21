/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:14:41 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 10:32:52 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*ft_prcs(char *c, t_stu *stu)
{
	stu->prcs = ft_atoi(c);
	while (*c > '0' && *c < '9')
	{
		c++;
	}
	return(c--);
}

char	*ft_width(char *c, t_stu *stu)
{
	stu->width = ft_atoi(c);
	while (*c > '0' && *c < '9')
	{
		c++;
	}
	return(c--);
}

void	ft_flag(char c, t_stu *stu)
{
	if (c == '#')
		stu->flag = stu->flag | DIESFLAG;
	else if (c == '+')
		stu->flag = stu->flag | PLUSFLAG;
	else if (c == '-')
		stu->flag = stu->flag | MOINSFLAG;
	else if (c == ' ')
		stu->flag = stu->flag | ESPFLAG;
	else if (c == '0')
		stu->flag = stu->flag | ZEROFLAG;

}

char	*ft_read(char *str, t_stu *stu, int *i)
{
	char cont;

	cont = 1;
	while (cont)
	{
		if (*str == 'h')
		{
			if (*(str + 1) == 'h')
			{
				stu->mod = hh;
				str++;
			}
			else
				stu->mod = h;
		}
		else if (*str == 'l')
		{
			if (*(str + 1) == 'l')
			{
				stu->mod = ll;
				str++;
			}
			else
				stu->mod = l;
		}
		else if (*str == 'j')
			stu->mod = j;
		else if (*str == 'z')
			stu->mod = z;
		else if (*str  == '#' || *str  == '+' || *str  == '-' || *str  == ' ' || *str  == '0')
			ft_flag(*str, stu);
		else if (*str >= '1' && *str <= '9')
		{
			if (*(str - 1) == '.')
				str = ft_prcs(str, stu);
			else
				str = ft_width(str, stu);
		}
		else if (ft_strchr("sSpdDioOuUxXcC",*str) && *str)
		{
			stu->conv = *str;
			cont = 0;
			(*i)++;
		}
		else
		{
			if (*str)
			{
				ft_putchar(*str);
				str++;
			}
			return (str);
		}
		str++;
	}
	//	printf ("________\n%d\n",stu->mod);
	//	printf ("%c\n",stu->conv);
	return (str);
}

void ft_nbp(const char *str, t_stu *stu)
{
	char *c = (char *)str;
	int i = 0;

	while (*c)
	{
		if (*c == '%')
			c = ft_read(c + 1, stu, &i);
		else
		{
			ft_putchar(*c);
			c++;
		}
	}
	stu->nb = i;
}

void	ft_init_stu(t_stu *stu)
{
	stu->flag = 0;
	stu->mod = none;
	stu->conv = 0;
}

int	ft_printf(const char *str, ...)
{
	int res;
	t_stu stu;

	ft_init_stu(&stu);
	ft_nbp(str, &stu);
	printf("\n_______\nnb de %% =  %d\n",stu.nb);

	res = ft_singleton(-1);
	ft_singleton(0);
	return (res);
}
