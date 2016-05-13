/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/13 14:17:17 by ademenet         ###   ########.fr       */
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
	char c;
	setlocale(LC_ALL, "");

	printf("TRUE :\n");
	ret = printf("%ld%ld", 0, 42);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ld%ld", 0, 42);
	puts("");
	printf("ret1 : |%d|\n	", ret1);
	printf("===========================\n");

	printf("12C :\n");
	ret = printf("%ld", (long)INT_MAX + 1);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ld", (long)INT_MAX + 1);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%ld", (long)INT_MIN - 1);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ld", (long)INT_MIN - 1);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%ld", LONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ld", LONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%ld", LONG_MIN);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ld", LONG_MIN);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%li%li", 0, 42);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%li%li", 0, 42);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%li", (long)INT_MAX + 1);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%li", (long)INT_MAX + 1);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%li", (long)INT_MIN - 1);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%li", (long)INT_MIN - 1);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%li", LONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%li", LONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%li", LONG_MIN);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%li", LONG_MIN);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%lu, %lu", 0, ULONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%lu, %lu", 0, ULONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%lo, %lo", 0, ULONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%lo, %lo", 0, ULONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%lx, %lx", 0, ULONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%lx, %lx", 0, ULONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%lX, %lX", 0, ULONG_MAX);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%lX, %lX", 0, ULONG_MAX);
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%lc, %lc", L'暖', L'ح');
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%lc, %lc", L'暖', L'ح');
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	printf("TRUE :\n");
	ret = printf("%ls, %ls", L"暖炉", L"لحم خنزير");
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%ls, %ls", L"暖炉", L"لحم خنزير");
	puts("");
	printf("ret1 : |%d|\n", ret1);
	printf("===========================\n");

	return (0);
}
