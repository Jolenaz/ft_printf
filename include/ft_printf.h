/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:05:33 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 10:50:54 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "libft.h"
# include <stdarg.h>
# define NOFLAG 0
# define DIESFLAG 1
# define PLUSFLAG 2
# define MOINSFLAG 4
# define ESPFLAG 8
# define ZEROFLAG 16

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
	char	flag;
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
