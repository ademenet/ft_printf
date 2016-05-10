/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/10 18:55:39 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "./include/ft_printf.h"
#include <locale.h>

int		main()
{
	int ret1;
	int ret2;
	int	ret;
	setlocale(LC_ALL, "");

	/*
	**printf("TRUE1 :\n");
	**ret = printf("{%2c}", 0);
	**puts("");
	**printf("ret : |%d|\n", ret);
	**
	**printf("\nMINE1 :\n");
	**ret1 = ft_printf("{%2c}", 0);
	**puts("");
	**printf("ret1 : |%d|\n", ret1);
	 */


	printf("TRUE :\n");
	ret = printf("{%30S}", L"我是一只猫。");
	puts("");
	printf("ret : |%d|\n", ret);

	printf("\nMINE :\n");
	ret1 = ft_printf("{%30S}", L"我是一只猫。");
	puts("");
	printf("ret1 : |%d|\n", ret1);

	return (0);
}
