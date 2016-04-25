/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/25 18:07:15 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_valid_s(t_flag *f)
{
	static int	mask_s[11] = {-1, -1, 1, -1, -1, -1, -1, -1, 1, -1, -1};

	f->ndx = 1;
	ft_check_flag ? ft_check_width : 0;
	ft_check_width ? ft_check_precision : 0;
	ft_check_precision ? ft_check_modifier : 0;
	ft_check_modifier ? 1 : 0;

	if (ft_isdigit(f->frmt[i]))
	{
		f->frmt = &f->frmt[i];
		ft_check_width(f);
	}
	if (f->frmt[i] == '.')
	{
		f->frmt = &f->frmt[i];
		ft_check_precision(f);
	}
}

/*
**void		ft_flag_s(t_flag *f, va_list ap)
**{
**	if(ft_check_valid(f) == 1)
**}
 */
