/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_D.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 12:41:00 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/05 16:07:55 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char			*ft_modifier_D(t_flag *f, va_list *ap)
{
	intmax_t	data;
	uintmax_t	data_max;

	if (f->fla[12] == 1)
		data = (intmax_t)(va_arg(*ap, ssize_t));
	else if (f->fla[11] == 1)
		data = (va_arg(*ap, intmax_t));
	else if (f->fla[9] == 1)
		data = (intmax_t)(va_arg(*ap, long long));
	else if (f->fla[10] == 1)
		data = (intmax_t)(va_arg(*ap, long));
	else if (f->fla[8] == 1)
		data = (intmax_t)((short)va_arg(*ap, int));
	else if (f->fla[7] == 1)
		data = (intmax_t)((char)va_arg(*ap, int));
	else
		data = (intmax_t)(va_arg(*ap, long));
	data_max = ft_sign(f, data);
	return (ft_itoa_base(data_max, 10));
}

int			ft_handler_D(t_flag *f, va_list *ap)
{
	static int	mask_D[13] = {0, 0, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1};

	ft_apply_mask(f, mask_D);
	f->arg = ft_modifier_D(f, ap);
	ft_handler(f);
	return (0);
}
