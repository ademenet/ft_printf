/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 18:30:59 by ademenet         ###   ########.fr       */
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
	void		(*ptr)(*t_flag, *va_list);
}				t_spec;

typedef struct	s_flag
{
	char		*format;
	int			len;

	va_list		ap;

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

/*
** ft_display.c
*/

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);

/*
** ft_initialize_functions.c
*/

void	ft_initialize_specs_1(t_spec *specs);
void	ft_initialize_specs_2(t_spec *specs);

/*
** ft_dispatcher.c
*/

void	ft_specs_dispatcher(t_flag *flags, va_list *ap);

/*
** ft_parsing.c
*/

int		ft_get_flag_length(char *format);

/*
** ft_printf.c
*/

void	ft_printf(const char *format, ...);

#endif
