/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:05:33 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 17:00:46 by jbelless         ###   ########.fr       */
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
	va_list	ap;
	e_mod	mod;
	char	conv;
}				t_stu;

int		ft_printf(const char *format, ...);
void	ft_printf_s(t_stu *stu);
void	ft_printf_p(t_stu *stu);
void	ft_printf_d(t_stu *stu);
void	ft_printf_x(t_stu *stu);
void	ft_printf_grx(t_stu *stu);
void	ft_printf_o(t_stu *stu);
void	ft_printf_u(t_stu *stu);
void	ft_printf_c(t_stu *stu);

#endif
