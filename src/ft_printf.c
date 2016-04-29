/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:27 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/29 15:29:22 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

/*
** This our main function, it tooks our string and arguments, displays them or
** call subsidiaries functions to manage flags.
*/

void		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_flag		f;
	int			i;

	va_start(ap, format);
	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && (f.len =
			ft_get_flag_length((char*)&format[i])) > 0)
		{
			f.format = (char*)&format[i];
			ft_specs_dispatcher(&f, &ap);
			i += f.len;
		}
		else
			ft_putchar(format[i]);
	}
	va_end(ap);
}
