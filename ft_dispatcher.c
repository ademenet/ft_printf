/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 10:53:39 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 11:29:48 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function set the base in order to manage our differents specifiers and
** associate flags.
*/

void		ft_specs_dispatcher(char *format, t_flag *flags, va_list ap)
{
	t_spec	specs;
	int		j;

	initialize_specs_1(&specs);
	initialize_specs_2(&specs);
	while (specs[j].c != format[flags->len] && specs[j].c != 0)
    	j++;
    if (specs[j].c != 0)
    	specs[j].ptr(ap);
	flags->specs = &specs;
}
