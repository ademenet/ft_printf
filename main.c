/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 17:40:13 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	/*
	**printf("TEST AVEC d\n");
	**printf("|%d|\n", 123);
	**ft_printf("|%d|\n", 123);
	**printf("|%d|\n", -123);
	**ft_printf("|%d|\n", -123);
	**printf("|%5d|\n", 123);
	**ft_printf("|%5d|\n", 123);
	**printf("|%5d|\n", -123);
	**ft_printf("|%5d|\n", -123);
	**printf("|%015.5d|\n", 123);
	**ft_printf("|%015.5d|\n", 123);
	**printf("|%015.5d|\n", -123);
	**ft_printf("|%015.5d|\n", -123);
	**
	**printf("TEST AVEC %%\n");
	**printf("|%%|\n");
	**ft_printf("|%%|\n");
	**printf("|%5%|\n");
	**ft_printf("|%5%|\n");
	**printf("|%.5%|\n");
	**ft_printf("|%.5%|\n");
	**
	**printf("TEST AVEC i\n");
	**printf("|%i|\n", 123);
	**ft_printf("|%i|\n", 123);
	**printf("|%i|\n", -123);
	**ft_printf("|%i|\n", -123);
	**printf("|%5i|\n", 123);
	**ft_printf("|%5i|\n", 123);
	**printf("|%5i|\n", -123);
	**ft_printf("|%5i|\n", -123);
	**printf("|%015.5i|\n", 123);
	**ft_printf("|%015.5i|\n", 123);
	**printf("|%015.5i|\n", -123);
	**ft_printf("|%015.5i|\n", -123);
	**
	**printf("TEST AVEC x\n");
	**printf("|%x|\n", 123);
	**ft_printf("|%x|\n", 123);
	**printf("|%x|\n", -123);
	**ft_printf("|%x|\n", -123);
	**printf("|%5x|\n", 123);
	**ft_printf("|%5x|\n", 123);
	**printf("|%5x|\n", -123);
	**ft_printf("|%5x|\n", -123);
	**printf("|%015.5x|\n", 123);
	**ft_printf("|%015.5x|\n", 123);
	**printf("|%015.5x|\n", -123);
	**ft_printf("|%015.5x|\n", -123);
	**
	**printf("TEST AVEC o\n");
	**printf("|%o|\n", 123);
	**ft_printf("|%o|\n", 123);
	**printf("|%o|\n", -123);
	**ft_printf("|%o|\n", -123);
	**printf("|%5o|\n", 123);
	**ft_printf("|%5o|\n", 123);
	**printf("|%5o|\n", -123);
	**ft_printf("|%5o|\n", -123);
	**printf("|%015.5o|\n", 123);
	**ft_printf("|%015.5o|\n", 123);
	**printf("|%015.5o|\n", -123);
	**ft_printf("|%015.5o|\n", -123);
	**
	**printf("TEST AVEC u\n");
	**printf("|%u|\n", 123);
	**ft_printf("|%u|\n", 123);
	**printf("|%u|\n", -123);
	**ft_printf("|%u|\n", -123);
	**printf("|%5u|\n", 123);
	**ft_printf("|%5u|\n", 123);
	**printf("|%5u|\n", -123);
	**ft_printf("|%5u|\n", -123);
	**printf("|%015.5u|\n", 123);
	**ft_printf("|%015.5u|\n", 123);
	**printf("|%015.5u|\n", -123);
	**ft_printf("|%015.5u|\n", -123);
	 */

	printf("TESTS DIVERS\n");
	ft_printf("test\n");
	ft_printf("test\n");
	ft_printf("1234\n");
	printf("|%015.5d|\n", 123);
	ft_printf("|%015.5d|\n", 123);



	return (0);
}
