/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/18 17:12:50 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int res;
	char *str = "%.3*x\n";
//	char *str2 = "%0-5#  ";
/*
	printf(str, "abc");
	printf(str2, 1,1, "abc");
	printf(str, "abcd");
	printf(str2,1,1, "abcd");
	printf(str, "abcde");
	printf(str2,1,1, "abcde");
	printf(str, "abcdef");
	printf(str2,1,1, "abcdef");
	printf(str, "abcdefg");
	printf(str2,1,1, "abcdefg");
*/
	res = printf(str,-6,255);

	printf("_______\nnb de char ecrit : %d\n",res);
	return (0);
}
