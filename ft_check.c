/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 12:24:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/26 16:41:41 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**int			ft_check_len(t_flag *f)
**{
**	if (f->ndx < f->len)
**		return (-1);
**	return (0);
**}
 */

void		ft_check_initialize(t_flag *f)
{
	int		i;

	while (f->flmo[i])
	{
		f->flmo[i] = 0;
		i++;
	}
}

int			ft_check_flag(t_flag *f, int *mask)
{
	while (f->ndx <= f->len && (f->frmt[f->ndx] == '#' || f->frmt[f->ndx] == '0' ||
		f->frmt[f->ndx] == '-' || f->frmt[f->ndx] == '+' ||
		f->frmt[f->ndx] == ' '))
	{
		if(f->frmt[f->ndx] == '#')
			f->flmo[0] = mask[0];
		if(f->frmt[f->ndx] == '0')
			f->flmo[1] = mask[1];
		if(f->frmt[f->ndx] == '-')
			f->flmo[2] = mask[2];
		if(f->frmt[f->ndx] == '+')
			f->flmo[3] = mask[3];
		if(f->frmt[f->ndx] == ' ')
			f->flmo[4] = mask[4];
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
		f->width = ft_atoi((const char*)str);
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
			f->precision = ft_atoi((const char*)str);
			free(str);
		}
	}
	return (ft_check_modifier(f, mask));
}

int			ft_check_modifier(t_flag *f, int *mask_s)
{
	int i = 0;
	// FAUX : checker le 1er char et le char + 1
	while (f->ndx++ < f->len)
	{
		i++;
		printf("%d tour\n", i);
		if(f->frmt[f->ndx] == 'h' && f->frmt[f->ndx + 1] == 'h')
			f->flmo[5] = f->flmo[5] + mask_s[5];
		else if(f->frmt[f->ndx] == 'h')
			f->flmo[6] = f->flmo[6] + mask_s[6];
		if(f->frmt[f->ndx] == 'l' && f->frmt[f->ndx + 1] == 'l')
			f->flmo[7] = f->flmo[7] + mask_s[7];
		else if(f->frmt[f->ndx] == 'l')
			f->flmo[8] = f->flmo[8] + mask_s[8];
		if(f->frmt[f->ndx] == 'j')
			f->flmo[9] = f->flmo[9] + mask_s[9];
		if(f->frmt[f->ndx] == 'z')
			f->flmo[10] = f->flmo[10] + mask_s[10];
	}
	return (1);
}
