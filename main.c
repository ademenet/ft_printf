/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/06 15:44:07 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	int	ret;

	printf("TRUE :\n");
	ret = printf("|%|\n");
	printf("ret : |%d|\n", ret);

	printf("\nMINE :\n");
	ret = ft_printf("|%|\n", 0);
	printf("ret : |%d|\n", ret);

	return (0);
}
