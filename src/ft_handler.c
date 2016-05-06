/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:49:48 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/06 15:41:54 by ademenet         ###   ########.fr       */
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

int			ft_handler(t_flag *f)
{
	int	k;
	k = -1;
	if (f->fla[0] == -1 && f->arg[0] != f->spe)
		f->arg = "\0";
	if (f->fla[0] != 0)
		ft_precision(f);
	if (f->fla[1] > 0)
		ft_width(f);
	else if (f->fla[1] == 0 && f->fla[0] > 0)
		ft_precision_zero(f);
	if (f->fla[0] == 0 && f->fla[1] == 0)
		ft_space_and_plus(f);
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		ft_putchar(f->arg[k], f);
	return (1);
}
