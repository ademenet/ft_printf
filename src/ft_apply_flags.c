/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 15:23:29 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/10 15:07:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** Pas de free dans la precision WARNING
** Sub string if 's' or 'S'.
*/

void	ft_precision_string(t_flag *f)
{
	char	*str2;

	str2 = f->arg;

	if (f->spe == 's' || f->spe == 'S')
	{
		if (f->fla[0] == -1)
			f->arg = "\0";
		else
			f->arg = ft_strsub(str2, 0, f->fla[0]);
	}
}

/*
** Appelle la fonction space_plus_sharp, width == 0 et precision > 0
** ajout des 0 pour completer la precision
*/

void	ft_precision_add_zero_no_width(t_flag *f)
{
	int	i;
	int	len;

	len = f->fla[0];
	i = ft_strlen(f->arg);
	ft_space_plus_sharp(f);
	if (!(f->spe == 's' || f->spe == 'S' || f->spe == 'c' || f->spe == 'C'))
	{
		while (len > i-- && i > 0)
			len--;
		if (f->fla[0] > f->fla[1] + ft_strlen(f->arg))
		{
			while (++i < len)
					ft_putchar('0', f);
		}
	}
}

/*
** Ajout 0 pour o et O, 0x pour x et p, 0X pour X
*/

void	ft_sharp(t_flag *f)
{
	if ((f->fla[2] == 1 && f->arg[0] != '0' && f->fla[0] != -1)
		|| f->spe == 'p')
	{
		if (f->spe == 'o' || f->spe == 'O' || f->spe == 'x' || f->spe == 'X' ||
			f->spe == 'p')
		{
			if ((f->spe == 'x' && f->arg[0] != '0') || f->spe == 'p')
			{
				ft_putchar('0', f);
				ft_putchar('x', f);
			}
			else if (f->spe == 'X' && f->arg[0] != '0')
			{
				ft_putchar('0', f);
				ft_putchar('X', f);
			}
			else if ((f->spe == 'o' || f->spe == 'O') &&
				f->fla[0] <= ft_strlen(f->arg))
				ft_putchar('0', f);
			else if ((f->spe == 'o' || f->spe == 'O') && f->fla[0] == -1)
				ft_putchar('0', f);
		}
	}
}

/*
** Ajoute un espace si flag ' ' OU un signe +/- si flag '+'
** appelle la fonction ft_sharp
*/

void	ft_space_plus_sharp(t_flag *f)
{
	if (f->fla[5] == 1 || f->fla[6] == 1)
	{
		if (f->spe == 'd' || f->spe == 'D' || f->spe == 'i')
		{
			if (f->fla[6] == 1 && f->fla[5] == 0 && f->sign != '-')
				ft_putchar(' ', f);
			if (f->fla[5] == 1 && ft_isdigit(f->arg[0]) && f->sign == '+')
				ft_putchar('+', f);
		}
	}
	if (f->sign == '-')
		ft_putchar('-', f);
	ft_sharp(f);
}
