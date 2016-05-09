/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/09 17:27:46 by ademenet         ###   ########.fr       */
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

	printf("TRUE :\n");
	ret = printf("{%05.s}{%04.2s}", 0, NULL);
	puts("");
	printf("ret : |%d|\n", ret);

	printf("\nMINE :\n");
	ret1 = ft_printf("{%05.s}{%s}", 0, NULL);
	puts("");
	printf("ret1 : |%d|\n", ret1);

	return (0);
}
