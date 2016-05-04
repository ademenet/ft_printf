/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/25 12:24:50 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 09:37:50 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


/*
**printf("\nf->fla[0] = %d\n", f->fla[0]);
**printf("f->fla[1] = %d\n", f->fla[1]);
**printf("f->fla[2] = %d\n", f->fla[2]);
**printf("f->fla[3] = %d\n", f->fla[3]);
**printf("f->fla[4] = %d\n", f->fla[4]);
**printf("f->fla[5] = %d\n", f->fla[5]);
**printf("f->fla[6] = %d\n", f->fla[6]);
**printf("f->fla[7] = %d\n", f->fla[7]);
**printf("f->fla[8] = %d\n", f->fla[8]);
**printf("f->fla[9] = %d\n", f->fla[9]);
**printf("f->fla[10] = %d\n", f->fla[10]);
**printf("f->fla[11] = %d\n", f->fla[11]);
**printf("f->fla[12] = %d\n", f->fla[12]); getchar();
 */

/*
** Initialize our int array fla[13] with zeros.
*/

void		ft_check_initialize(t_flag *f)
{
	int		i;

	i = 0;
	while (i < 14)
	{
		f->fla[i] = 0;
		i++;
	}
	f->ndx = 0;
}

/*
** This function reads each flags and call functions in order to save them.
** First, initialize our int array.
*/

void		ft_check(t_flag *f)
{
	ft_check_initialize(f);
	while (f->frmt[f->ndx] == '#' || f->frmt[f->ndx] == '0'
		|| f->frmt[f->ndx] == '-' || f->frmt[f->ndx] == '+'
		|| f->frmt[f->ndx] == ' ' || f->frmt[f->ndx] == 'h'
		|| f->frmt[f->ndx] == 'l' || f->frmt[f->ndx] == 'j'
		|| f->frmt[f->ndx] == 'z' || f->frmt[f->ndx] == '.'
		|| f->frmt[f->ndx] == '5')
	{
		ft_check_flag(f);
		ft_check_width(f);
		ft_check_precision(f);
		ft_check_modifier(f);
	}
}

/*
** This function compare the current char with flags and put an int through the
** mask.
*/

void		ft_check_flag(t_flag *f)
{
	if (f->frmt[f->ndx] == '#' || f->frmt[f->ndx] == '0'
		|| f->frmt[f->ndx] == '-' || f->frmt[f->ndx] == '+'
		|| f->frmt[f->ndx] == ' ' )
	{
		if(f->frmt[f->ndx] == '#')
			f->fla[2] = 1;
		if(f->frmt[f->ndx] == '0')
			f->fla[3] = 1;
		if(f->frmt[f->ndx] == '-')
			f->fla[4] = 1;
		if(f->frmt[f->ndx] == '+')
			f->fla[5] = 1;
		if(f->frmt[f->ndx] == ' ')
			f->fla[6] = 1;
		f->ndx++;
	}
}

/*
** This function check the witdh if we find a digit.
*/

void		ft_check_width(t_flag *f)
{
	int		i;
	char	*str;

	i = f->ndx;
	while (ft_isdigit(f->frmt[f->ndx]))
		f->ndx++;
	if (f->ndx - i > 0)
	{
		f->fla[1] = 0;
		str = ft_strsub(f->frmt, i, f->ndx - i);
		f->fla[1] = ft_atoi((const char*)str);
		free(str);
	}
}

/*
** This function check the precision if we find a dot.
*/

// CHECKER LE DERNIER POINT ET PRENDRE LA VALEUR DU DERNIER POINT ! printf("%50.1.4s", "jungle");
void		ft_check_precision(t_flag *f)
{
	int		i;
	char	*str;
	if (f->frmt[f->ndx] == '.')
	{
		f->fla[0] = 0;
		i = ++f->ndx;
		while (ft_isdigit(f->frmt[f->ndx]))
			f->ndx++;
		if (f->ndx - i > 0)
		{
			str = ft_strsub(f->frmt, i, f->ndx - i);
			f->fla[0] = ft_atoi((const char*)str);
			free(str);
		}
	}
}

/*
** This function compare and analyse the modifiers.
*/

void		ft_check_modifier(t_flag *f)
{
	while (f->frmt[f->ndx] == 'h' || f->frmt[f->ndx] == 'l' ||
		f->frmt[f->ndx] == 'j' || f->frmt[f->ndx] == 'z')
	{
		if(f->frmt[f->ndx] == 'h' && f->frmt[f->ndx + 1] == 'h')
		{
			f->fla[7] = 1;
			f->ndx++;
		}
		else if(f->frmt[f->ndx] == 'h')
			f->fla[8] = 1;
		if(f->frmt[f->ndx] == 'l' && f->frmt[f->ndx + 1] == 'l')
		{
			f->fla[9] = 1;
			f->ndx++;
		}
		else if(f->frmt[f->ndx] == 'l')
			f->fla[10] = 1;
		if(f->frmt[f->ndx] == 'j')
			f->fla[11] = 1;
		if(f->frmt[f->ndx] == 'z')
			f->fla[12] = 1;
		f->ndx++;
	}
}
