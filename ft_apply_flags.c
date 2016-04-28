/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 15:23:29 by tvisenti          #+#    #+#             */
/*   Updated: 2016/04/28 18:47:30 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minus(t_flag *f)
{
	int		len;
	int		i;
	int		k;

	i = ft_strlen(f->arg);
	k = -1;
	len = f->fla[1] - f->fla[0];

	while (f->fla[0] > i++)
		f->ret += write(1, "0", 1);
	while (f->arg[++k] != '\0')
		f->ret += write(1, &f->arg[k], 1);
	while (len-- > 0)
		f->ret += write(1, " ", 1);
}

/*
** le len va trop loin WTF ?
*/

void	ft_zero(t_flag *f)
{
	int		len;
	int		k;
	int		i;

	i = ft_strlen(f->arg);
	k = -1;
	len = f->fla[1] - ft_strlen(f->arg);
	while (len-- > 0)
	{
		if (f->fla[3] == 1)
			f->ret += write(1, "0", 1);
		else
			f->ret += write(1, " ", 1);
	}
	while (f->fla[0] > i++)
		f->ret += write(1, "0", 1);
	while (f->arg[++k] != '\0')
		f->ret += write(1, &f->arg[k], 1);
}

void	ft_width(t_flag *f)
{
	int	i;
	int	k;

	k = -1;
	i = ft_strlen(f->arg);
	if (i < f->fla[1])
	{
		if (f->fla[4] == 1)
			ft_minus(f);
		else
			ft_zero(f);
	}
	else
	{
		while (f->arg[++k] != '\0')
			f->ret += write(1, &f->arg[k], 1);
	}
}

/*
** Pas de free dans la precision WARNING
*/

void	ft_precision(t_flag *f)
{
	char	*str2;
	int		i;

	str2 = f->arg;
	f->arg = ft_strsub(str2, 0, f->fla[0]);
}

/*
** Si le nombre est positif add + ok, mais si negatif add - !!!
*/

void	ft_space_and_plus(t_flag *f)
{
	if (f->fla[6] == 1 && f->fla[5] == 0)
		f->ret += write(1, " ", 1);
	if (f->fla[5] == 1)
		f->ret += write(1, "+", 1);
}
