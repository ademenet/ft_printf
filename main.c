/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/13 10:14:28 by ademenet         ###   ########.fr       */
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
	ret = printf("{% S}", NULL);
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("{% S}", NULL);
	puts("");
	printf("ret1 : |%d|\n", ret1);

	printf("TRUE :\n");
	ret = printf("%s %s", "this", "is");
	puts("");
	printf("ret : |%d|\n", ret);
	printf("MINE :\n");
	ret1 = ft_printf("%s %s", "this", "is");
	puts("");
	printf("ret1 : |%d|\n", ret1);

	return (0);
}
