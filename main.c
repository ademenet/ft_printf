/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/03 19:47:37 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	printf("VRAI1 +hhs\tcouco%+hhs\n", "u");
	ft_printf("OURS1\tcouco%+hhs\n", "u");
	printf("VRAI2 .55s\tcouco%.55s\n", "u");
	ft_printf("OURS2\tcouco%.55s\n", "u");
	printf("VRAI3 5s\tcouco%5s\n", "u");
	ft_printf("OURS3\tcouco%5s\n", "u");
	printf("VRAI4 05s\tcouco%05s\n", "u");
	ft_printf("OURS4\tcouco%05s\n", "u");
	printf("VRAI5 +-#5s\tcouco%+-#5s\n", "u");
	ft_printf("OURS5\tcouco%+-#5s\n", "u");
	printf("VRAI6 ls\tcouco%ls\n", L"u");
	ft_printf("OURS6\tcouco%ls\n", L"u");

	return (0);
}
