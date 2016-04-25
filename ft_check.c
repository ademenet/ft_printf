/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 12:24:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/25 18:16:11 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_len(t_flag *f)
{
	if (f->ndx < f->len)
		return (-1);
	return (0);
}

void		ft_check_initialize(t_flag *f)
{
	int		i;

	while (f->flmo[i])
	{
		f->flmo[i] = 0;
		i++;
	}
}

int			ft_check_flag()
{
	while (f->ndx <= len && (f->frmt[f->ndx] == '#' || f->frmt[f->ndx] == '0' ||
		f->frmt[f->ndx] == '-' || f->frmt[f->ndx] == '+' ||
		f->frmt[f->ndx] == ' '))
	{
		ft_check_flag(f, mask_s);
		f->ndx++;
	}
}

void		ft_validate_flag(t_flag *f, int *mask_s)
{
	if(f->frmt[f->ndx] == '#')
		f->flmo[0] = mask_s[0];
	if(f->frmt[f->ndx] == '0')
		f->flmo[1] = mask_s[1];
	if(f->frmt[f->ndx] == '-')
		f->flmo[2] = mask_s[2];
	if(f->frmt[f->ndx] == '+')
		f->flmo[3] = mask_s[3];
	if(f->frmt[f->ndx] == ' ')
		f->flmo[4] = mask_s[4];
}

/*
** FREE !
*/

void		ft_check_width(t_flag *f)
{
	int		i;
	int		nbr;

	i = 0;
	while (ft_isdigit(f->frmt[i]) && i < len)
		i++;
	if (i > 0)
		f->width = ft_atoi((const char*)ft_strsub(f->frmt, 0, i));
}

void		ft_check_precision(t_flag *f)
{
	int		i;
	int		nbr;

	i = 0;
	if (f->frmt[i++] == '.')
	{
		while (ft_isdigit(f->frmt[i]) && i < len)
			i++;
		if (i > 0)
			f->precision = ft_atoi((const char)ft_strsub(f->frmt, 0, i));
	}
}

void		ft_check_modifier(t_flag *f, int *mask_s)
{
	// FAUX : checker le 1er char et le char + 1
	if(&f->frmt == 'hh')
		f->flmo[5] = f->flmo[5] + mask_s[5];
	if(&f->frmt == 'h')
		f->flmo[6] = f->flmo[6] + mask_s[6];
	if(&f->frmt == 'll')
		f->flmo[7] = f->flmo[7] + mask_s[7];
	if(&f->frmt == 'l')
		f->flmo[8] = f->flmo[8] + mask_s[8];
	if(&f->frmt == 'j')
		f->flmo[9] = f->flmo[9] + mask_s[9];
	if(&f->frmt == 'z')
		f->flmo[10] = f->flmo[10] + mask_s[10];
}

int		main()
{
	t_flag f;
	int mask_s[11] = {-1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1};

	ft_check_initialize(&f);
	printf("%d\n", f.flmo[0]);
	printf("%d\n", f.flmo[7]);
	f.frmt = "gsaugs+jii345.654z";
	ft_check_flag(&f, mask_s);
	ft_check_width(&f, mask_s);
	ft_check_precision(&f, mask_s);
	ft_check_modifier(&f, mask_s);
	printf("%d\n", f.flmo[3]);
	printf("%d\n", f.width);
	printf("%d\n", f.precision);
	printf("%d\n", f.flmo[10]);
	return (0);
}
