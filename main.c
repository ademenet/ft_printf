/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/03 13:02:30 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	printf("VRAI\tcouco%c\n", 'u');
	ft_printf("OURS\tcouco%c\n", 'u');
	printf("VRAI\tcouco%.55c\n", 'u');
	ft_printf("OURS\tcouco%.55c\n", 'u');
	printf("VRAI\tcouco%5c\n", 'u');
	ft_printf("OURS\tcouco%5c\n", 'u');
	printf("VRAI\tcouco%05c\n", 'u');
	ft_printf("OURS\tcouco%05c\n", 'u');
	printf("VRAI\tcouco%+-#5c\n", 'u');
	ft_printf("OURS\tcouco%+-#5c\n", 'u');
	return (0);
}
