/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:49:48 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/10 18:29:50 by ademenet         ###   ########.fr       */
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

int			ft_handler_char(t_flag *f)
{
	int	k;

	k = -1;
	if (f->fla[0] != 0)
		ft_precision_string(f);
	if (f->fla[1] > 0)
		ft_width_char(f);
	if (f->fla[1] == 0)
		ft_display_arg(f);
	// while (f->arg[++k] != '\0' && f->fla[1] == 0)
	// 	ft_putchar(f->arg[k], f);
	return (1);
}

int			ft_handler_numb(t_flag *f)
{
	int	k;

	k = -1;
	if (f->fla[0] == -1 && f->arg[0] == '0' && !(f->fla[2] == 1 &&
		(f->spe == 'o' || f->spe == 'O' || f->spe == 'p'))) // a revoir
		f->arg = "\0";
	if (f->fla[1] > 0)
		ft_width_numb(f);
	else if (f->fla[1] == 0 && f->fla[0] > 0)
		ft_precision_without_width(f);
	if (f->fla[0] <= 0 && f->fla[1] == 0)
		ft_space_plus_sharp(f);
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		ft_putchar(f->arg[k], f);
	return (1);
}
