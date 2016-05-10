/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:49:48 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/10 15:48:42 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		ft_apply_mask(t_flag *f, int *mask)
{
	int		i;

	i = 2;
	while (i < 14)
	{
		f->fla[i] = f->fla[i] * mask[i];
		i++;
	}
}

/*
** Tronque la chaine, prends en compte la width / flags, et affiche
*/

int			ft_handler_char(t_flag *f)
{
	int	k;

	k = -1;
	if (f->fla[0] != 0)
		ft_precision_string(f);
	if (f->fla[1] > 0)
		ft_width_char(f);
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		ft_putchar(f->arg[k], f);
	return (1);
}

int			ft_handler_numb(t_flag *f)
{
	int	k;

	k = -1;
	if (f->fla[0] == -1 && f->arg[0] == '0' && !(f->fla[2] == 1 &&
		(f->spe == 'o' || f->spe == 'O' || f->spe == 'p')))
		f->arg = "\0";
	if (f->fla[1] > 0)
		ft_width_numb(f);
	else if (f->fla[1] == 0 && f->fla[0] > 0)
		ft_precision_add_zero_no_width(f);
	if ((f->fla[0] == 0 && f->fla[1] == 0) || (f->fla[0] == -1 &&
		f->fla[1] == 0))
		ft_space_plus_sharp(f);
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		ft_putchar(f->arg[k], f);
	return (1);
}
