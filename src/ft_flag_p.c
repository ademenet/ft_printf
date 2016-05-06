/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 12:42:01 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/06 15:25:58 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_handler_p(t_flag *f, va_list *ap)
{
	static int	mask_p[13] = {0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};

	f->fla[2] = 1;
	ft_apply_mask(f, mask_p);
	f->arg = ft_strlwr(ft_itoa_base((uintmax_t)va_arg(*ap, void*), 16));
	ft_handler(f);
	return (0);
}
