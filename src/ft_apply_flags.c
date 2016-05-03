/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 15:23:29 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/03 18:51:40 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** Pas de free dans la precision WARNING
** Sub string if 's' or 'S'.
*/

void	ft_precision(t_flag *f)
{
	char	*str2;

	str2 = f->arg;
	if (f->spe == 's' || f->spe == 'S')
		f->arg = ft_strsub(str2, 0, f->fla[0]);
}

/*
** Add 0, 0x or 0X.
*/

void	ft_sharp(t_flag *f)
{
	if (f->fla[2] == 1)
	{
		if (f->spe == 'o' || f->spe == 'O' || f->spe == 'x' || f->spe == 'X')
		{
			if (f->spe == 'x')
				f->ret += write(1, "0x", 2);
			else if (f->spe == 'X')
				f->ret += write(1, "0X", 2);
			else if (f->fla[0] <= ft_strlen(f->arg))
				f->ret += write(1, "0", 1);
		}
	}
}

/*
** Put space and/or plus.
*/

void	ft_space_and_plus(t_flag *f)
{
	if (f->fla[5] == 1 || f->fla[6] == 1)
	{
		if (f->spe == 'd' || f->spe == 'D' || f->spe == 'i')
		{
			if (f->fla[6] == 1 && f->fla[5] == 0)
				f->ret += write(1, " ", 1);
			if (f->fla[5] == 1 && ft_isdigit(f->arg[0]))
				f->ret += write(1, "+", 1);
		}
	}
}
