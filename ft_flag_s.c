/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/29 10:55:08 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_valid_s(t_flag *f)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};

	f->ndx = 1;
	ft_check_initialize(f);
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
