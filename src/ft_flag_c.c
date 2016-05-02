/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 15:34:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 11:06:28 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_check_valid_c(t_flag *f, char ap)
{
	static int	mask_c[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	// char		c;
	f->ndx = 1;
	ft_check_initialize(f);
	if (ft_check_flag(f, mask_c))
		exit(-1);
	// c = va_arg(ap, char);
	ft_handler_c(f, ap);
	return (0);
}

// TODO : faire une variable pour stocker '0' ou ' ' et refactoriser

int			ft_handler_c(t_flag *f, char c)
{
	int		i;

	i = 1;
	if (f->width > 0 && f->flmo[8] != 1) // si j'ai une 'largeur' et que je n'ai pas de 'l'
	{
		if (f->flmo[2] != 1) // si je n'ai pas de '-'
		{
			while (i++ < f->width)
				ft_putchar(' ');
			ft_putchar(c);
		}
		else if (f->flmo[1] == 2) // si j'ai un '0'
		{
			while (i++ < f->width)
				ft_putchar('0');
			ft_putchar(c);
		}
		else
		{
			while (i++ < f->width)
				ft_putchar(' ');
			ft_putchar(c);
		}
	}
	else
		ft_putchar(c);
	return (1);
}
