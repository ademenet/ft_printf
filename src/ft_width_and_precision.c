/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_and_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/30 15:41:52 by tvisenti          #+#    #+#             */
/*   Updated: 2016/05/06 15:42:54 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** Remove more space on width for '0' flag
*/

void	len_of_precision_zero(t_flag *f, int len)
{
	int	i;

	i = ft_strlen(f->arg);
	if (f->fla[5] == 1 || f->fla[6] == 1 || f->sign == '-' ||
		(f->fla[2] == 1 && f->fla[0] <=	ft_strlen(f->arg) &&
		(f->spe == 'o' || f->spe == 'O')))
		len--;
	if (f->fla[2] == 1 && (f->spe == 'x' || f->spe == 'X' || f->spe =='p'))
		len = len - 2;
	while (f->fla[0] > i && (!(f->spe == 's' || f->spe == 'S' ||
	f->spe == 'c' || f->spe == 'C')))
	{
		len--;
		i++;
	}
	if (f->fla[0] < f->fla[1] + ft_strlen(f->arg))
	{
		while (len-- > 0)
		{
			if (f->fla[3] == 1 && f->fla[0] == 0)
				ft_putchar('0', f);
			else
				ft_putchar(' ', f);
		}
	}
}

/*
** Put 0 and space if width is bigger
*/

void	ft_zero(t_flag *f)
{
	int		k;
	int		i;
	int		len;

	k = -1;
	i = ft_strlen(f->arg);
	len = f->fla[1] - ft_strlen(f->arg);
	if (f->arg[0] == 0 && (f->spe == 'c' || f->spe == 'C'))
		len--;
	if (f->fla[3] == 1)
	{
		ft_space_and_plus(f);
		len_of_precision_zero(f, len);
	}
	else
	{
		len_of_precision_zero(f, len);
		ft_space_and_plus(f);
	}
	while (!(f->spe == 's' || f->spe == 'S' || f->spe == 'c' || f->spe == 'C')
		&& f->fla[0] > i++)
		ft_putchar('0', f);
	while (f->arg[++k] != '\0')
		ft_putchar(f->arg[k], f);
}

/*
** Remove more space on width for '-' flag
*/

void	len_of_precision_minus(t_flag *f, int len)
{
	int	i;

	i = ft_strlen(f->arg);
	if (f->fla[5] == 1 || f->fla[6] == 1 || f->sign == '-' ||
		(f->fla[2] == 1 && f->fla[0] <= ft_strlen(f->arg) &&
		(f->spe == 'o' || f->spe == 'O')))
		len--;
	if (f->fla[2] == 1 && (f->spe == 'x' || f->spe == 'X'))
		len = len - 2;
	while (f->fla[0] > i++ && (!(f->spe == 's' || f->spe == 'S' ||
	f->spe == 'c' || f->spe == 'C')))
		len--;
	if (f->fla[0] < f->fla[1] + ft_strlen(f->arg))
	{
		while (len-- > 0)
			ft_putchar(' ', f);
	}
}

/*
** Put string on the right, add 0 and space if width is bigger
*/

void	ft_minus(t_flag *f)
{
	int		i;
	int		k;
	int		len;
	int		len_zero;

	k = -1;
	len_zero = f->fla[1] - ft_strlen(f->arg);
	if (f->arg[0] == 0 && (f->spe == 'c' || f->spe == 'C'))
		len_zero--;
	i = ft_strlen(f->arg);
	len = f->fla[1] - f->fla[0];
	ft_space_and_plus(f);
	while (f->fla[0] > i++ && !(f->spe == 's' || f->spe == 'S' ||
		f->spe == 'c' || f->spe == 'C'))
		ft_putchar('0', f);
	while (f->arg[++k] != '\0')
		ft_putchar(f->arg[k], f);
	len_of_precision_minus(f, len_zero);
}

/*
** Prends en compte la width
*/

void	ft_width(t_flag *f)
{
	int	i;
	int	k;

	k = -1;
	i = ft_strlen(f->arg);
	if (i < f->fla[1])
	{
		if (f->fla[4] == 1)
			ft_minus(f);
		else
			ft_zero(f);
	}
	else
	{
		while (f->arg[++k] != '\0')
			ft_putchar(f->arg[k], f);
	}
}
