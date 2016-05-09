/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/09 17:26:26 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_handler_s(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	wchar_t		*S;

	ft_apply_mask(f, mask_s);
	f->fla[0] = 0;
	if (f->fla[10] == 1)
	{
		S = va_arg(*ap, wchar_t*);
		while (S != '\0')
		{
			ft_putwchar(*S, f);
			S++;
		}
		return (0);
	}
	else
		f->arg = va_arg(*ap, char*);
	if (f->arg == 0)
		f->arg = "(null)";
	// f->ret += write(1, "(null)", 6);
	ft_handler(f);
	return (0);
}
