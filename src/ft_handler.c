/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:49:48 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 17:13:14 by ademenet         ###   ########.fr       */
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

void		ft_handler(t_flag *f)
{
	int	i;
	int	k;

	k = -1;
	i = ft_strlen(f->arg);
	if (f->fla[0] > 0)
		ft_precision(f);
	if (f->fla[1] > 0)
		ft_width(f);
	if ((f->fla[5] == 1 || f->fla[6] == 1 || f->fla[2] == 1) &&
	(f->fla[0] == 0 && f->fla[1] == 0))
	{
		ft_space_and_plus(f);
		ft_sharp(f);
	}
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		f->ret += write(1, &f->arg[k], 1);
}
