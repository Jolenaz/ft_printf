/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:05:33 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/18 16:57:50 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

#include "libft.h"
# include <stdarg.h>

typedef enum	s_mod
{
	none,
	hh,
	h ,
	l,
	ll,
	j,
	z
}				e_mod;

typedef struct s_stu
{
	int		nb;
	int		isflag;
	int		flag;
	int		iwidth;
	int		width;
	int		isprcs;
	int		prcs;
	int		ismod;
	e_mod	mod;
	char	conv;
}				t_stu;

int	ft_printf(const char *format, ...);

#endif
