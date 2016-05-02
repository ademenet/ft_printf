/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 12:15:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 18:27:16 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** This file initiates our array of structs in order to detect specifiers and
** point directly to the right function.
*/

void		ft_initialize_specs_2(t_spec *specs)
{
	specs[11].c = 'x';
	specs[11].ptr = NULL;
	specs[12].c = 'X';
	specs[12].ptr = NULL;
	specs[13].c = 'p';
	specs[13].ptr = NULL;
	specs[14].c = 0;
	specs[14].ptr = NULL;
}

void		ft_initialize_specs_1(t_spec *specs)
{
	specs[0].c = 's';
	specs[0].ptr = NULL;
	specs[1].c = 'S';
	specs[1].ptr = NULL;
	specs[2].c = 'c';
	specs[2].ptr = &ft_check_valid_c;
	specs[3].c = 'C';
	specs[3].ptr = NULL;
	specs[4].c = 'd';
	specs[4].ptr = NULL;
	specs[5].c = 'D';
	specs[5].ptr = NULL;
	specs[6].c = 'i';
	specs[6].ptr = NULL;
	specs[7].c = 'o';
	specs[7].ptr = NULL;
	specs[8].c = 'O';
	specs[8].ptr = NULL;
	specs[9].c = 'u';
	specs[9].ptr = NULL;
	specs[10].c = 'U';
	specs[10].ptr = NULL;
}
