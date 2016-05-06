/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/06 15:41:01 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	int	ret;

	printf("TRUE :\n");
	ret = printf("@moulitest: |%#.o|\n", 0);
	printf("ret : |%d|\n", ret);
	ret = printf("@moulitest: |%#.0o|\n", 0);
	printf("ret : |%d|\n", ret);

	printf("\nMINE :\n");
	ret = ft_printf("@moulitest: |%#.o|\n", 0);
	printf("ret : |%d|\n", ret);
	ret = ft_printf("@moulitest: |%#.0o|\n", 0);
	printf("ret : |%d|\n", ret);

	return (0);
}
