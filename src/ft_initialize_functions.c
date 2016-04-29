/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 12:15:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 15:20:10 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** This file initiates our array of structs in order to detect specifiers and
** point directly to the right function.
*/

void		ft_initialize_specs_2(t_spec *specs)
{
	specs[12].c = 'x';
	specs[12].ptr = NULL;
	specs[13].c = 'X';
	specs[13].ptr = NULL;
	specs[14].c = 'p';
	specs[14].ptr = NULL;
	specs[15].c = 0;
	specs[15].ptr = NULL;
}

void		ft_initialize_specs_1(t_spec *specs)
{
	specs[0].c = 's';
	specs[0].ptr = &ft_putstr;
	specs[1].c = 'S';
	specs[1].ptr = NULL;
	specs[3].c = 'c';
	specs[3].ptr = NULL;
	specs[4].c = 'C';
	specs[4].ptr = NULL;
	specs[5].c = 'd';
	specs[5].ptr = NULL;
	specs[6].c = 'D';
	specs[6].ptr = NULL;
	specs[7].c = 'i';
	specs[7].ptr = NULL;
	specs[8].c = 'o';
	specs[8].ptr = NULL;
	specs[9].c = 'O';
	specs[9].ptr = NULL;
	specs[10].c = 'u';
	specs[10].ptr = NULL;
	specs[11].c = 'U';
	specs[11].ptr = NULL;
}
