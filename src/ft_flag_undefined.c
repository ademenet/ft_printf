/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_undefined.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 18:24:31 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 09:36:43 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int				ft_handler_undefined(t_flag *f)
{
	static int	mask_c[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2};

	ft_apply_mask(f, mask_c);
	f->arg[0] = f->spe;
	f->arg[1] = '\0';
	ft_handler(f);
	return (0);
}
