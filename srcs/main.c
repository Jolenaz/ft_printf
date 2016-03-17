/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelless <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:06:53 by jbelless          #+#    #+#             */
/*   Updated: 2016/03/17 17:01:07 by jbelless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char *str = "%05.5s\n";
	char *str2 = "%0*.*s\n\n";

	printf(str, "abc");
	printf(str2, 5,5, "abc");
	printf(str, "abcd");
	printf(str2,5,5, "abcd");
	printf(str, "abcde");
	printf(str2,5,5, "abcde");
	printf(str, "abcdef");
	printf(str2,5,5, "abcdef");
	printf(str, "abcdefg");
	printf(str2,5,5, "abcdefg");

	return (0);
}
