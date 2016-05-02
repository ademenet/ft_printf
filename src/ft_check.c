/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 12:24:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/29 10:49:41 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

void		ft_check_initialize(t_flag *f)
{
	int		i;

	while (f->fla[i])
	{
		f->fla[i] = 0;
		i++;
	}
}

int			ft_check_flag(t_flag *f, int *mask)
{
	while (f->ndx <= f->len && (f->frmt[f->ndx] == '#' || f->frmt[f->ndx] == '0'
		|| f->frmt[f->ndx] == '-' || f->frmt[f->ndx] == '+' ||
		f->frmt[f->ndx] == ' '))
	{
		if(f->frmt[f->ndx] == '#')
			f->fla[2] = mask[2];
		if(f->frmt[f->ndx] == '0')
			f->fla[3] = mask[3];
		if(f->frmt[f->ndx] == '-')
			f->fla[4] = mask[4];
		if(f->frmt[f->ndx] == '+')
			f->fla[5] = mask[5];
		if(f->frmt[f->ndx] == ' ')
			f->fla[6] = mask[6];
		f->ndx++;
	}
	return (ft_check_width(f, mask));
}

int			ft_check_width(t_flag *f, int *mask)
{
	int		i;
	char	*str;

	i = f->ndx;
	while (ft_isdigit(f->frmt[f->ndx]) && f->ndx < f->len)
		f->ndx++;
	if (i > 0)
	{
		str = ft_strsub(f->frmt, i, f->ndx - i);
		f->fla[1] = ft_atoi((const char*)str);
		free(str);
	}
	return (ft_check_precision(f, mask));
}

// CHECKER LE DERNIER POINT ET PRENDRE LA VALEUR DU DERNIER POINT ! printf("%50.1.4s", "jungle");
int			ft_check_precision(t_flag *f, int *mask)
{
	int		i;
	char	*str;

	if (f->frmt[f->ndx] == '.')
	{
		i = ++f->ndx;
		while (ft_isdigit(f->frmt[f->ndx]) && f->ndx < f->len)
			f->ndx++;
		if (i > 0)
		{
			str = ft_strsub(f->frmt, i, f->ndx - i);
			f->fla[0] = ft_atoi((const char*)str);
			free(str);
		}
	}
	return (ft_check_modifier(f, mask));
}

int			ft_check_modifier(t_flag *f, int *mask)
{
	int i = 0;
	while (f->ndx < f->len && (f->frmt[f->ndx] == 'h' || f->frmt[f->ndx] == 'l'
		|| f->frmt[f->ndx] == 'j' || f->frmt[f->ndx] == 'z'))
	{
		i++;
		if(f->frmt[f->ndx] == 'h' && f->frmt[f->ndx + 1] == 'h')
			f->fla[7] = f->fla[7] + mask[7];
		else if(f->frmt[f->ndx] == 'h')
			f->fla[8] = f->fla[8] + mask[8];
		if(f->frmt[f->ndx] == 'l' && f->frmt[f->ndx + 1] == 'l')
			f->fla[9] = f->fla[9] + mask[9];
		else if(f->frmt[f->ndx] == 'l')
			f->fla[10] = f->fla[10] + mask[10];
		if(f->frmt[f->ndx] == 'j')
			f->fla[11] = f->fla[11] + mask[11];
		if(f->frmt[f->ndx] == 'z')
			f->fla[12] = f->fla[12] + mask[12];
		f->ndx++;
	}
	return (ft_check_len(f, mask));
}

int			ft_check_len(t_flag *f, int *mask)
{
	if (f->ndx < f->len)
		return (0);
	return (1);
}
