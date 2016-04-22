/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize_functions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 12:15:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 11:28:52 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** This file initiates our array of structs in order to detect specifiers and
** point directly to the right function.
*/

void		ft_initialize_specs_2(t_spec *specs)
{
	fptrs[12].c = 'x';
	fptrs[12].ptr = NULL;
	fptrs[13].c = 'X';
	fptrs[13].ptr = NULL;
	fptrs[14].c = 'p';
	fptrs[14].ptr = NULL;
	fptrs[15].c = 0;
	fptrs[15].ptr = NULL;
}

void		ft_initialize_specs_1(t_spec *specs)
{
	fptrs[0].c = 's';
	fptrs[0].ptr = NULL;
	fptrs[1].c = 'S';
	fptrs[1].ptr = NULL;
	fptrs[3].c = 'c';
	fptrs[3].ptr = NULL;
	fptrs[4].c = 'C';
	fptrs[4].ptr = NULL;
	fptrs[5].c = 'd';
	fptrs[5].ptr = NULL;
	fptrs[6].c = 'D';
	fptrs[6].ptr = NULL;
	fptrs[7].c = 'i';
	fptrs[7].ptr = NULL;
	fptrs[8].c = 'o';
	fptrs[8].ptr = NULL;
	fptrs[9].c = 'O';
	fptrs[9].ptr = NULL;
	fptrs[10].c = 'u';
	fptrs[10].ptr = NULL;
	fptrs[11].c = 'U';
	fptrs[11].ptr = NULL;
}
