/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/06 14:57:36 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./include/ft_printf.h"

int		main()
{
	int		pf;
	int		fpf;

	// puts("TRUE :\n");
	// pf = printf("%lhl", "151121542131");
	// puts("\n");
	// printf("pf == %d", pf);
	//  puts("\n");
	pf = printf("%lhl", "425486154");
	puts("");
	printf("|%d|\n", pf);

	puts("MINE :");
	fpf = ft_printf("%lhl", "425486154");
	puts("");
	printf("|%d|\n", fpf);
	// printf("fpf == %d", fpf);

	return (0);
}
