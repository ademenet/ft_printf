/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 18:26:18 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{

	// printf("TESTS DIVERS\n");
	ft_printf("test\n");
	ft_printf("test\n");
	ft_printf("1234\n");
	printf("|%015.5d|\n", 123);
	ft_printf("|%015.5d|\n", 123);
	ft_printf("|%s|\n", "chuhs");
	ft_printf("|%%|\n");
	ft_printf("|%%%c|\n", 'c');



	return (0);
}
