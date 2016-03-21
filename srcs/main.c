/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/21 11:21:08 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
//	int res;
//	char *str = "%.3*x\n";
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
//	res = printf(str,-6,255);

//	printf("_______\nnb de char ecrit : %d\n",res);
	printf("%s\n",ft_itoa_base(-100,2));
	return (0);
}
