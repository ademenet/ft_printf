/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 14:48:03 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	printf("TEST AVEC s\n");
	printf("\nVRAI1 +hhs\tcouco%+hhs\n", "u");
	ft_printf("OURS1\tcouco%+hhs\n", "u");
	printf("\nVRAI2 .55s\tcouco%.55s\n", "u");
	ft_printf("OURS2\tcouco%.55s\n", "u");
	printf("\nVRAI3 5s\tcouco%5s\n", "u");
	ft_printf("OURS3\tcouco%5s\n", "u");
	printf("\nVRAI4 05s\tcouco%05s\n", "u");
	ft_printf("OURS4\tcouco%05s\n", "u");
	printf("\nVRAI5 +-#5s\tcouco%+-#5s\n", "u");
	ft_printf("OURS5\tcouco%+-#5s\n", "u");
	printf("\nVRAI6 ls\tcouco%ls\n", L"u");
	ft_printf("OURS6\tcouco%ls\n", L"u");

	printf("TEST AVEC d\n");
	printf("1  | %%d ||%d|\n", 123);
	ft_printf("|%d|\n", 123);
	printf("2  | %%d ||%d|\n", -123);
	ft_printf("|%d|\n", -123);
	printf("3  | %%5d ||%5d|\n", 123);
	ft_printf("|%5d|\n", 123);
	printf("4  | %%5d ||%5d|\n", -123);
	ft_printf("|%5d|\n", -123);
	printf("5  | %%015.5d ||%015.5d|\n", 123);
	ft_printf("|%015.5d|\n", 123);
	printf("6  | %%015.5d ||%015.5d|\n", -123);
	ft_printf("|%015.5d|\n", -123);

	printf("TEST AVEC %%\n");
	printf("1  | %%%% ||%%|\n");
	ft_printf("|%%|\n");
	printf("1  | %%5%% ||%5%|\n");
	ft_printf("|%5%|\n");
	printf("1  | %%.5%% ||%.5%|\n");
	ft_printf("|%.5%|\n");

	printf("TEST AVEC i\n");
	printf("|%i|\n", 123);
	ft_printf("|%i|\n", 123);
	printf("|%i|\n", -123);
	ft_printf("|%i|\n", -123);
	printf("|%5i|\n", 123);
	ft_printf("|%5i|\n", 123);
	printf("|%5i|\n", -123);
	ft_printf("|%5i|\n", -123);
	printf("|%015.5i|\n", 123);
	ft_printf("|%015.5i|\n", 123);
	printf("|%015.5i|\n", -123);
	ft_printf("|%015.5i|\n", -123);

	printf("TEST AVEC x\n");
	printf("|%x|\n", 123);
	ft_printf("|%x|\n", 123);
	printf("|%x|\n", -123);
	ft_printf("|%x|\n", -123);
	printf("|%5x|\n", 123);
	ft_printf("|%5x|\n", 123);
	printf("|%5x|\n", -123);
	ft_printf("|%5x|\n", -123);
	printf("|%015.5x|\n", 123);
	ft_printf("|%015.5x|\n", 123);
	printf("|%015.5x|\n", -123);
	ft_printf("|%015.5x|\n", -123);

	printf("TEST AVEC o\n");
	printf("|%o|\n", 123);
	ft_printf("|%o|\n", 123);
	printf("|%o|\n", -123);
	ft_printf("|%o|\n", -123);
	printf("|%5o|\n", 123);
	ft_printf("|%5o|\n", 123);
	printf("|%5o|\n", -123);
	ft_printf("|%5o|\n", -123);
	printf("|%015.5o|\n", 123);
	ft_printf("|%015.5o|\n", 123);
	printf("|%015.5o|\n", -123);
	ft_printf("|%015.5o|\n", -123);

	printf("TEST AVEC u\n");
	printf("|%u|\n", 123);
	ft_printf("|%u|\n", 123);
	printf("|%u|\n", -123);
	ft_printf("|%u|\n", -123);
	printf("|%5u|\n", 123);
	ft_printf("|%5u|\n", 123);
	printf("|%5u|\n", -123);
	ft_printf("|%5u|\n", -123);
	printf("|%015.5u|\n", 123);
	ft_printf("|%015.5u|\n", 123);
	printf("|%015.5u|\n", -123);
	ft_printf("|%015.5u|\n", -123);

	return (0);
}
