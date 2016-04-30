/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/30 16:16:39 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#include <stdio.h> // A EFFACER !!!
#include <stdlib.h> // A EFFACER !!!


typedef struct	s_flag
{
	char		*frmt;
	int			ndx;
	int			len;
	int			ret;

	va_list		ap;

	/*
	** fla[13] is an array which contains flags for precision, width, flags
	** and modifiers such as:
	** |0        |1    |2|3|4|5|6|7 |8|9 |10|11|12|
	** |precision|width|#|0|-|+| |hh|h|ll|l |j |z |
	*/

	int			fla[13];
	char		spe;
	char		*arg;
}				t_flag;

/*
**typedef struct	s_spec
**{
**	char		c;
**	void		(*ptr)(*t_flag, *va_list);
**}				t_spec;
 */

/*
** ft_initialize_functions.c
*/

/*
**void	ft_initialize_specs_1(t_spec *specs);
**void	ft_initialize_specs_2(t_spec *specs);
 */

/*
** ft_dispatcher.c
*/

/* void	ft_specs_dispatcher(t_flag *f, va_list *ap); */

/*
** ft_parsing.c
*/

/* int		ft_get_flag_length(char *format); */

/*
** ft_printf.c
*/

/* void	ft_printf(const char *format, ...); */

/*
** ft_check.c
*/

void		ft_check_initialize(t_flag *f);
int			ft_check_flag(t_flag *f, int *mask);
int			ft_check_width(t_flag *f, int *mask);
int			ft_check_precision(t_flag *f, int *mask);
int			ft_check_modifier(t_flag *f, int *mask);
int			ft_check_len(t_flag *f, int *mask);

/*
** ft_flag_c.c
*/

int			ft_check_valid_c(t_flag *f, char ap);
int			ft_handler_c(t_flag *f, char c);

/*
** ft_flag_s.c
*/

int			ft_check_valid_s(t_flag *f);

/*
** ft_flag_d.c
*/

int			ft_check_valid_d(t_flag *f);
int			ft_handler(t_flag *f);
void		ft_precision_i(t_flag *f);

/*
** ft_apply_flags.c
*/

void		ft_space_and_plus(t_flag *f);
void		ft_sharp(t_flag *f);
void		ft_precision(t_flag *f);

/*
** ft_width_and_precision.c
*/

void		len_of_precision_zero(t_flag *f, int len, int len_zero);
void		ft_zero(t_flag *f);
void		len_of_precision_minus(t_flag *f, int len, int len_zero);
void		ft_minus(t_flag *f);
void		ft_width(t_flag *f);

/*
** other functions
*/

int			ft_isdigit(int c);
long		ft_atoi(const char *str);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
int			ft_strlen(char *str);
void		ft_putchar(char c);
void		ft_putstr(char *s);
void		ft_putnbr(int n);


#endif
