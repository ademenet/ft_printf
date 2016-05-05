/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 15:34:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/05 17:34:52 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int				ft_handler_c(t_flag *f, va_list *ap)
{
	static int	mask_c[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	char		c;
	char		s[2];

	ft_apply_mask(f, mask_c);
	c = (char)va_arg(*ap, int);
	s[0] = c;
	s[1] = '\0';
	f->arg = s;
	ft_handler(f);
	return (0);
}
