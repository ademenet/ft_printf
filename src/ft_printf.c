/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:27 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/12 15:04:49 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** This our main function, it tooks our string and arguments, displays them or
** call subsidiaries functions to manage flags.
*/

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	t_flag		f;
	int			i;


	va_start(ap, format);
	i = -1;
	f.ret = 0;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			f.frmt = (char*)&format[++i];
			if (ft_dispatcher(&f, &ap) == -1)
				return (f.ret);
			i += f.ndx;
		}
		else if (format[i] != '\0' && format[i] != '%')
			g_buf[g_i++](format[i]);
	}
	va_end(ap);
	return (f.ret);
}
