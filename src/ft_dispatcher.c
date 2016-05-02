/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:53:39 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 18:27:39 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** This function set the basic in order to manage our differents specifiers and
** associate flags. It calls the right function.
*/

void		ft_specs_dispatcher(t_flag *f, va_list *ap)
{
	t_spec	specs[16];
	int		j;

	ft_initialize_specs_1(specs);
	ft_initialize_specs_2(specs);
	j = 0;
	while (specs[j].c != f->frmt[f->len] && specs[j].c != 0)
	{
		j++;
	}
	if (specs[j].c != 0)
	{
		f->spe = specs[j].c;
		specs[j].ptr(f, ap);
	}
}
