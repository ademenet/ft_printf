/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 09:35:46 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
**static void	ft_modifier(t_flag *f, va_list *ap)
**{
**
**}
 */


int			ft_handler_s(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};

	ft_apply_mask(f, mask_s);
	if (f->fla[10] == 1)
		return (0);
	else
		f->arg = va_arg(*ap, char*);
	ft_handler(f);
	return (0);
}
