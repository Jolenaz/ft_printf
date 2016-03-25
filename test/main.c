/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/25 17:21:18 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	char *str = "%S\n";
	int res;
	//	printf("%S\n", L"日");
	int *i = L"日日日日";
	//	int l = 255;
	//	int m = 256;
	//	printf("%d\n",i);
	//	printf("%c",206);
	//	printf("%c",177);

	//	char *c = (char *)&i;
	//	printf("%c\n",*c);
	//	printf("%c\n",*(c+1));
	//	printf("%c\n",*(c+2));
	//	printf("%c\n",*(c+3));

	res = ft_printf(str,i);
//	printf("res = %d\n",res);
	res = printf(str,i);
//	printf("res = %d\n",res);
	return (0);
}
