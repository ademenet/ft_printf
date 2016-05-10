/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 15:41:52 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/10 17:20:14 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** Put 0 and space if width is bigger
*/

void	ft_zero_char(t_flag *f)
{
	int		i;
	int		nb_space;

	i = -1;
	nb_space = f->fla[1] - ft_strlen(f->arg);
	if (f->arg[0] == 0 && (f->spe == 'c' || f->spe == 'C'))
		nb_space--;
	while (nb_space-- > 0)
	{
		if (f->fla[3] == 1 && f->fla[0] == 0)
			ft_putchar('0', f);
		else
			ft_putchar(' ', f);
	}
	while (f->arg[++i] != '\0')
		ft_putchar(f->arg[i], f);
}

/*
** Put string on the right, add 0 and space if width is bigger
*/

void	ft_minus_char(t_flag *f)
{
	int		i;
	int		nb_space;

	i = -1;
	nb_space = f->fla[1] - ft_strlen(f->arg); // cest le nombre d' ' ' a afficher ensuite avec len_of_precision_minus
	if (f->arg[0] == 0 && (f->spe == 'c' || f->spe == 'C'))
		nb_space--;
	while (f->arg[++i] != '\0') // jaffiche mon arg
		ft_putchar(f->arg[i], f);
	while (nb_space-- > 0)
		ft_putchar(' ', f);
}

/*
** Prends en compte la width
*/

void	ft_width_char(t_flag *f)
{
	int	i;
	int	k;

	k = -1;
	i = ft_strlen(f->arg);
	if (i < f->fla[1])
	{
		if (f->fla[4] == 1)
			ft_minus_char(f);
		else
			ft_zero_char(f);
	}
	else
	{
		while (f->arg[++k] != '\0')
			ft_putchar(f->arg[k], f);
	}
}
