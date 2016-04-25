/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/25 18:04:02 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>f
# include <stdlib.h>

#include <stdio.h> //A EFFACER !!!

typedef struct	s_flag
{
	char		*frmt;
	int			ndx;
	int			len;

	va_list		ap;

	int			flmo[11];

	int			width;

	int			precision;

	/*
	**int			sharp;
	**int			zero;
	**int			minus;
	**int			plus;
	**int			space;
	**int			hh;
	**int			h;
	**int			ll;
	**int			l;
	**int			j;
	**int			z;
	 */
}				t_flag;

typedef struct	s_spec
{
	char		c;
	void		(*ptr)(*t_flag, *va_list);
}				t_spec;

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

void	ft_specs_dispatcher(t_flag *f, va_list *ap);

/*
** ft_parsing.c
*/

int		ft_get_flag_length(char *format);

/*
** ft_printf.c
*/

void	ft_printf(const char *format, ...);

/*
** ft_check.c
*/

void		ft_check_initialize(t_flag *f);
int			ft_check_flag(t_flag *f);
void		ft_validate_flag(t_flag *f, int *mask_s);
void		ft_check_width(t_flag *f);
void		ft_check_precision(t_flag *f);
void		ft_check_modifier(t_flag *f);

/*
** other functions
*/

int			ft_isdigit(int c);
long		ft_atoi(const char *str);
char		*ft_strsub(char const *s, unsigned int start, size_t len);



#endif
