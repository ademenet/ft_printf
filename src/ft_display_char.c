/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 15:41:52 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/12 16:32:38 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		ft_display_arg(t_flag *f)
{
	int		i;
	size_t	len;

	i = -1;
	if ((f->spe == 's' && f->fla[10] == 1) || f->spe == 'S' ||
		(f->spe == 'c' && f->fla[10] == 1) || f->spe == 'C')
	{
		if (f->arg != NULL || f->warg != NULL)
		{
			len = ft_wstrlen(f->warg);
			while (len > 0)
			{
				ft_putwchar(f->warg[++i], f);
				len--;
			}
		}
		else if (f->fla[0] != -1)
			ft_buf_null(f);
	}
	else
	{
		while (f->arg[++i] != '\0')
			ft_buf(f->arg[i], f);
	}
}

int			ft_width_rest(t_flag *f)
{
	if ((f->spe == 's' && f->fla[10] == 1) || f->spe == 'S' ||
		(f->spe == 'c' && f->fla[10] == 1) || f->spe == 'C')
		return (f->fla[1] - (int)ft_wbytelen(f->warg));
	else
		return (f->fla[1] - ft_strlen(f->arg));
}

/*
** Put 0 and space if width is bigger
*/

void		ft_zero_char(t_flag *f)
{
	int		nb_space;

	nb_space = ft_width_rest(f);
	if ((f->spe == 'c' && f->arg[0] == 0) || (f->spe == 'C' && f->warg[0] == 0))
		nb_space--;
	while (nb_space-- > 0)
	{
		if (f->fla[3] == 1 && f->fla[0] <= 0)
			ft_buf('0', f);
		else
			ft_buf(' ', f);
	}
	ft_display_arg(f);
}

/*
** Put string on the right, add 0 and space if width is bigger
*/

void		ft_minus_char(t_flag *f)
{
	int		nb_space;

	nb_space = ft_width_rest(f);
	if ((f->spe == 'c' && f->arg[0] == 0) || (f->spe == 'C' && f->warg[0] == 0))
		nb_space--;
	ft_display_arg(f);
	while (nb_space-- > 0)
		ft_buf(' ', f);
}

/*
** Prends en compte la width
*/

void		ft_width_char(t_flag *f)
{
	int		i;

	if (f->warg)
		i = (int)ft_wstrlen(f->warg);
	else if (f->arg)
		i = ft_strlen(f->arg);
	if (i < f->fla[1])
	{
		if (f->fla[4] == 1)
			ft_minus_char(f);
		else
			ft_zero_char(f);
	}
	else
		ft_display_arg(f);
}
