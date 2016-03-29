/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/29 17:15:24 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	char *str = "%-04d\n";
//	int res;
	//	printf("%S\n", L"日");
//	int *i = L"我la是一只猫。";
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

//	res = ft_printf(str,0,i);
//	ft_printf("%s %C %d %p %x %% %S\n", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
//	printf("%s %C %d %p %x %% %S\n", "bonjour ", L'該', 42, &free, 42, L"لحم خنزير");
	ft_printf(str,10000);
	printf(str,10000);
//	ft_printf("res = %d\n",res);
//	res = printf(str,0,i);
//	printf("res = %d\n",res);
	return (0);
}
