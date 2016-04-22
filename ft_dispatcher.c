/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:53:39 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 18:16:47 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** This function set the base in order to manage our differents specifiers and
** associate flags. It calls the right function.
*/

void		ft_specs_dispatcher(char *format, t_flag *flags, va_list *ap)
{
	t_spec	specs[16];
	char	*str;
	int		j;

	ft_initialize_specs_1(specs);
	ft_initialize_specs_2(specs);
	j = 0;
	flags->sharp = 0;
	while (specs[j].c != format[flags->len] && specs[j].c != 0)
    	j++;
    if (specs[j].c != 0)
	{
		str = va_arg(*ap, char*);
		// printf("%s\n", str);
    	specs[j].ptr(str);
	}
	flags->specs = specs;
}
