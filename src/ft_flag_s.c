/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 10:04:24 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int			ft_handler_s(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	char		*str;

	f->ndx = 1;
	ft_check_initialize(f);
	ft_check_flag(f, mask_s);
	str = va_arg(*ap, char*);


	/*
	**ft_check_flag(f, mask_s) ? 1 : 0;
	**ft_check_width ? ft_check_precision : 0;
	**ft_check_precision ? ft_check_modifier : 0;
	**ft_check_modifier ? 1 : 0;
	 */

	/*
	**if (ft_isdigit(f->frmt[i]))
	**{
	**	f->frmt = &f->frmt[i];
	**	ft_check_width(f);
	**}
	**if (f->frmt[i] == '.')
	**{
	**	f->frmt = &f->frmt[i];
	**	ft_check_precision(f);
	**}
	 */
	return (ft_check_flag(f, mask_s));
}

// int		ft_handler_s(t_flag *f)
// {
// 	int	i;
// 	int	k;
//
// 	f->ret = 0;
// 	k = -1;
// 	i = ft_strlen(f->arg);
// 	if (f->fla[0] != 0)
// 		ft_precision(f);
// 	if (f->fla[1] != 0)
// 		ft_width(f);
// 	while (f->arg[++k] != '\0' && f->fla[1] == 0)
// 		f->ret += write(1, &f->arg[k], 1);
// 	if (f->ret == 0)
// 		return (-1);
// 	return (f->ret);
// }
