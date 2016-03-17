/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/17 17:41:25 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *str = "%0.1s\n";
	char *str2 = "%0*.*s\n\n";

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

	return (0);
}
