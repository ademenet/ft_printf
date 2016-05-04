/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 09:35:56 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_handler_d(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};
	int			numb;

	ft_apply_mask(f, mask_s);
	numb = (int)va_arg(*ap, int);
	f->arg = ft_itoa_base(numb, 10);
	ft_handler(f);
	return (0);
}
