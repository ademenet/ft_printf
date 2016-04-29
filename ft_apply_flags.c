/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 15:23:29 by tvisenti          #+#    #+#             */
/*   Updated: 2016/04/29 15:22:40 by tvisenti         ###   ########.fr       */
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
	if (f->fla[6] == 1 || f->fla[5] == 1)
		ft_space_and_plus(f);
	while (f->fla[0] > i++)
		f->ret += write(1, "0", 1);
	while (f->arg[++k] != '\0')
		f->ret += write(1, &f->arg[k], 1);
	while (len-- > 0)
		f->ret += write(1, " ", 1);
}

/*
** le len va trop loin quand ya des 0 de precision ou un +
** probleme avec la bouche while len au niveau de l'affichage des 0 pour d avec
** precision f->fla[0] == 0
*/

// void	ft_zero_precision(t_flag *f)
// {
// 	int	i;
//
// 	i = f->fla[0];
// 	if (f->fla[0] == 0)
// 		f->ret += write(1, "0", 1);
// 	if (f->fla[0] == 0)
// }

void	ft_sharp(t_flag *f)
{
	if (f->spe == 'o' || f->spe == 'O' || f->spe == 'x' || f->spe == 'X')
	{
		if (f->spe == 'x')
			f->ret += write(1, "0x", 2);
		if (f->spe == 'X')
			f->ret += write(1, "0X", 2);
		else
			f->ret += write(1, "0", 1);
	}
}

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
	if (f->fla[6] == 1 || f->fla[5] == 1)
		ft_space_and_plus(f);
	while (!(f->spe == 's' || f->spe == 'S' || f->spe == 'c' || f->spe == 'C' ||
	f->spe == '%') && f->fla[0] > i++)
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
	if (f->spe == 's' || f->spe == 'S')
		f->arg = ft_strsub(str2, 0, f->fla[0]);
}

void	ft_space_and_plus(t_flag *f)
{
	if (f->spe == 'd' || f->spe == 'D' || f->spe == 'i')
	{
		if (f->fla[6] == 1 && f->fla[5] == 0)
			f->ret += write(1, " ", 1);
		if (f->fla[5] == 1 && ft_isdigit(f->arg[0]))
			f->ret += write(1, "+", 1);
	}
}
