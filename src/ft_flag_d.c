/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 11:36:44 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_check_valid_d(t_flag *f)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};

	f->ndx = 1;
	ft_check_initialize(f);
	return (ft_check_flag(f, mask_s));
}
