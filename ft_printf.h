/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 11:28:58 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#include <stdio.h> //A EFFACER !!!

typedef struct	s_spec
{
	char		c;
	void		(*ptr)(va_list);
}				t_spec;

typedef struct	s_flag
{
	t_spec		*specs;

	char		*format;
	int			len;

	int			sharp;
	int			zero;
	int			minus;
	int			plus;
	int			space;

	int			width;

	int			precision;

	int			hh;
	int			h;
	int			ll;
	int			l;
	int			j;
	int			z;
}				t_flag;

void		ft_specs_dispatcher(char *format, t_flag *flags, va_list ap);

/*
** Functions that are part of parsing.
*/

int			ft_get_flag_length(char *format);

/*
** Initialize our struct array with char and function pointers.
*/

void		ft_initialize_specs_1(t_spec *specs);
void		ft_initialize_specs_2(t_spec *specs);

/*
** Main functions.
*/

void		ft_printf(char *format, ...);

#endif
