/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 13:09:09 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char			*ft_modifier_d(t_flag *f, va_list *ap)
{
	intmax_t	data;

	if (f->fla[7] == 1)
		data = (intmax_t)((char)va_arg(*ap, int));
	if (f->fla[8] == 1)
		data = (intmax_t)((short)va_arg(*ap, int));
	if (f->fla[10] == 1)
		data = (intmax_t)(va_arg(*ap, long));
	if (f->fla[9] == 1)
		data = (intmax_t)(va_arg(*ap, long long));
	if (f->fla[11] == 1)
		data = (intmax_t)(va_arg(*ap, intmax_t));
	if (f->fla[12] == 1)
		data = (intmax_t)(va_arg(*ap, size_t));
	else
		data = (intmax_t)(va_arg(*ap, int));
	return (ft_itoa_base((intmax_t)data, 10));
}

int				ft_handler_d(t_flag *f, va_list *ap)
{
	static int	mask_d[13] = {0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	ft_apply_mask(f, mask_d);
	f->arg = ft_modifier_d(f, ap);
	ft_handler(f);
	return (0);
}
