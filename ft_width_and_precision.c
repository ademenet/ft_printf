/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_and_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 15:41:52 by tvisenti          #+#    #+#             */
/*   Updated: 2016/04/30 16:23:09 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Remove more space on width for '0' flag
*/

void	len_of_precision_zero(t_flag *f, int len, int len_zero)
{
	int	i;

	i = ft_strlen(f->arg);
	if (f->fla[5] == 1 || f->fla[6] == 1 || (f->fla[2] == 1 && f->fla[0] <=
		ft_strlen(f->arg) && (f->spe == 'o' || f->spe == 'O')))
		len--;
	if (f->fla[2] == 1 && (f->spe == 'x' || f->spe == 'X'))
		len = len - 2;
	while (f->fla[0] > i++ && (!(f->spe == 's' || f->spe == 'S' ||
	f->spe == 'c' || f->spe == 'C' || f->spe == '%')))
		len--;
	if (f->fla[0] < f->fla[1] + ft_strlen(f->arg))
	{
		while (len-- > 0)
		{
			if (f->fla[3] == 1)
				f->ret += write(1, "0", 1);
			else
				f->ret += write(1, " ", 1);
		}
	}
}

/*
** Put 0 and space if width is bigger
*/

void	ft_zero(t_flag *f)
{
	int		k;
	int		i;
	int		len;

	k = -1;
	i = ft_strlen(f->arg);
	len = f->fla[1] - ft_strlen(f->arg);
	len_of_precision_zero(f, len, i);
	if (f->fla[6] == 1 || f->fla[5] == 1 || f->fla[2] == 1)
	{
		ft_space_and_plus(f);
		ft_sharp(f);
	}
	while (!(f->spe == 's' || f->spe == 'S' || f->spe == 'c' || f->spe == 'C' ||
	f->spe == '%') && f->fla[0] > i++)
		f->ret += write(1, "0", 1);
	while (f->arg[++k] != '\0')
		f->ret += write(1, &f->arg[k], 1);
}

/*
** Remove more space on width for '-' flag
*/

void	len_of_precision_minus(t_flag *f, int len, int len_zero)
{
	int	i;

	i = ft_strlen(f->arg);
	if (f->fla[5] == 1 || f->fla[6] == 1 || (f->fla[2] == 1 && f->fla[0] <=
		ft_strlen(f->arg) && (f->spe == 'o' || f->spe == 'O')))
		len--;
	if (f->fla[2] == 1 && (f->spe == 'x' || f->spe == 'X'))
		len = len - 2;
	while (f->fla[0] > i++ && (!(f->spe == 's' || f->spe == 'S' ||
	f->spe == 'c' || f->spe == 'C' || f->spe == '%')))
		len--;
	if (f->fla[0] < f->fla[1] + ft_strlen(f->arg))
	{
		while (len-- > 0)
			f->ret += write(1, " ", 1);
	}
}

/*
** Put string on the right, add 0 and space if width is bigger
*/

void	ft_minus(t_flag *f)
{
	int		i;
	int		k;
	int		len;
	int		len_zero;

	k = -1;
	len_zero = f->fla[1] - ft_strlen(f->arg);
	i = ft_strlen(f->arg);
	len = f->fla[1] - f->fla[0];
	if (f->fla[6] == 1 || f->fla[5] == 1 || f->fla[2] == 1)
	{
		ft_space_and_plus(f);
		ft_sharp(f);
	}
	while (f->fla[0] > i++)
		f->ret += write(1, "0", 1);
	while (f->arg[++k] != '\0')
		f->ret += write(1, &f->arg[k], 1);
	len_of_precision_minus(f, len_zero, i);
}

/*
** Prends en compte la width
*/

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
