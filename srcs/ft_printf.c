/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:14:41 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/23 12:23:03 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char	*ft_prcs(char *c, t_stu *stu)
{
	stu->prcs = ft_atoi(c);
	while (*c >= '0' && *c <= '9')
	{
		c++;
	}
	return(--c);
}

char	*ft_width(char *c, t_stu *stu)
{
	stu->width = ft_atoi(c);
	while (*c >= '0' && *c <= '9')
	{
		c++;
	}
	return(--c);
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
	if (stu->flag & PLUSFLAG)
		stu->flag = stu->flag & ~ESPFLAG;
//	printf("%s\n",ft_itoa_base(stu->flag, 2));

}

void	ft_fct(void	(*ft_conv[127])(t_stu*))
{
	ft_conv['s'] = &ft_printf_s;
	ft_conv['i'] = &ft_printf_d;
	ft_conv['d'] = &ft_printf_d;
	ft_conv['p'] = &ft_printf_p;
	ft_conv['x'] = &ft_printf_x;
	ft_conv['X'] = &ft_printf_grx;
	ft_conv['o'] = &ft_printf_o;
	ft_conv['u'] = &ft_printf_u;
	ft_conv['c'] = &ft_printf_c;
	ft_conv['D'] = &ft_printf_grd;
	ft_conv['O'] = &ft_printf_gro;
	ft_conv['U'] = &ft_printf_gru;
}

char	*ft_read(char *str, t_stu *stu, int *i)
{
	char	cont;
	void	(*ft_conv[127])(t_stu*);

	ft_fct(ft_conv);
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
		else if (*str  == '#' || *str  == '+' || *str  == '-' || *str  == ' ' || (*str  == '0' && *(str - 1) != '.'))
			ft_flag(*str, stu);
		else if (*str == '.')
		{
			if (*(str + 1) < '1' && *(str + 1) > '9' && *(str + 1) != '*')
				stu->prcs = 0;	
		}
		else if (*str >= '0' && *str <= '9')
		{
			if (*(str - 1) == '.')
				str = ft_prcs(str, stu);
			else
				str = ft_width(str, stu);
		}
		else if (*str == '*')
		{
			if (*(str - 1) == '.')
				stu->prcs = va_arg(stu->ap, int);
			else
			{
				stu->width = va_arg(stu->ap, int);
				if (stu->width < 0)
				{
					stu->width *= -1;
					stu->flag = stu->flag | MOINSFLAG;
				}
			}
		}
		else if (ft_strchr("sSpdDioOuUxXcC",*str) && *str)
		{
			stu->conv = *str;
			(ft_conv[(int)*str])(stu);
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
	return (str);
}

void ft_read_format(const char *str, t_stu *stu)
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
	stu->prcs = -1;
	stu->width = 0;
}

int	ft_printf(const char *str, ...)
{
	int		res;
	t_stu	stu;

	ft_init_stu(&stu);
	va_start(stu.ap, str);
	ft_read_format(str, &stu);
//	printf("\n_______nb de %% =  %d\n",stu.nb);

	res = ft_singleton(-1);
	ft_singleton(0);
	return (res);
}
