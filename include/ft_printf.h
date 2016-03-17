/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:05:33 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/17 17:40:46 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

#include "libft.h"
# include <stdarg.h>

typedef struct	s_elem
{
	int		isflag;
	char	flag;
	int		isize;
	int		size;
	int		isprcs
	int		prcs;
	int		ismod;
	char	mod;
	char	type;
	struct	e_elem *next;
}				t_elem;

typedef struct s_stu
{
	int		nb;
	t_elem	*elem;
}				t_stu;

int	ft_printf(const char *format, ...);

#endif
