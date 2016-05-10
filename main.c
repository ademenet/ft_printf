/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/10 15:06:16 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "./include/ft_printf.h"

int		main()
{
	int ret1;
	int ret2;
	int	ret;

	// printf("TRUE :\n");
	// ret = printf("{%05.s}{%04.9s}{%05s}{%5.3d}{%-5.3d}", 0, NULL, "1234", 12, 12);
	// puts("");
	// printf("ret : |%d|\n", ret);
	//
	// printf("\nMINE :\n");
	// ret1 = ft_printf("{%05.s}{%s}", 0, NULL);
	// puts("");
	// printf("ret1 : |%d|\n", ret1);

	ft_printf("|%6.c|\n", 'a');
	printf("|%6.c|\n\n", 'a');

	// ft_printf("{%05.s}\n", 0);
	// printf("{%05.s}",0);

	return (0);
}
