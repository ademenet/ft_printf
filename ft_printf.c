/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:27 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/21 18:17:36 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_flag		flags;
	int			i;

	va_start(ap, format);
	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
			i += ft_get_flag_length(&format[i++], &flags);
		else
			ft_putchar(format[i]);
	}
	va_end(ap);
}

/*
 * void		ft_printf(char *str, ...)
 * {
 * 	va_list		ap;
 * 	t_fptr		fptrs[3];
 *
 * 	initialize_t_fptr(fptrs);
 * 	int i = 0;
 * 	int j = 0;
 * 	va_start(ap, str);
 * 	while (str[i] != '\0')
 * 	{
 * 		if (str[i] == '%')
 * 		{
 * 			i++;
 * 			while (fptrs[j].c != str[i] && fptrs[j].c != 0)
 * 			{
 * 				i++;
 * 				j++;
 * 			}
 * 			if (fptrs[j].c != 0)
 * 			{
 * 				fptrs[j].ptr(ap);
 * 				j = 0;
 * 				i = -1;
 * 			}
 * 		}
 * 		i++;
 * 	}
 * 	va_end(ap);
 * }
 */
