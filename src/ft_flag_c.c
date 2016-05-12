/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 15:34:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/12 13:58:18 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_handler_c(t_flag *f, va_list *ap)
{
	static int	mask_c[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	char		c;
	wchar_t		wc;
	char		s[2];

	ft_apply_mask(f, mask_c);
	if (f->fla[10] == 1)
	{
		wc = va_arg(*ap, wchar_t);
		ft_putwchar(wc, f);
		return (0);
	}
	else
	{
		c = (char)va_arg(*ap, int);
		if (c == 0 && f->fla[0] == -1)
			f->fla[0] = 0;
		s[0] = c;
		s[1] = '\0';
		f->arg = s;
		ft_handler_char(f);
	}
	if (f->arg[0] == 0)
		ft_putchar('\0', f);
	return (0);
}

int		ft_handler_wc(t_flag *f, va_list *ap)
{
	static int	mask_c[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2};
	wchar_t		wc;

	wc = va_arg(*ap, wchar_t);
	ft_putwchar(wc, f);
	return (0);
}
