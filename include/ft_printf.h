/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/05 11:15:51 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <wchar.h>

#include <stdio.h> // A EFFACER !!!
#include <stdlib.h> // A EFFACER !!!


typedef struct	s_flag
{
	char		*frmt;
	int			ndx;
	int			ret;

	char		spe;
	char		*arg;
	char		sign;

	va_list		ap;

	/*
	** fla[13] is an array which contains flags for precision, width, flags
	** and modifiers such as:
	** |0        |1    |2|3|4|5|6|7 |8|9 |10|11|12|
	** |precision|width|#|0|-|+| |hh|h|ll|l |j |z |
	*/

	int			fla[13];
}				t_flag;

typedef struct	s_spec
{
	char		c;
	int			(*ptr)();
}				t_spec;

/*
** FT_PRINTF
*/

int			ft_printf(const char *format, ...);

/*
** CHECKS
*/

void		ft_check(t_flag *f);
void		ft_check_initialize(t_flag *f);
void		ft_check_flag(t_flag *f);
void		ft_check_width(t_flag *f);
void		ft_check_precision(t_flag *f);
void		ft_check_modifier(t_flag *f);

/*
** UTILS
*/

void		ft_putchar(char c, t_flag *f);
void		ft_putwchar(wchar_t wchar, t_flag *f);
int			ft_wcharlen(wchar_t wchar);
int			ft_isdigit(int c);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_itoa_base(long nbr, int base);
uintmax_t	ft_sign(t_flag *f, intmax_t nbr);
int			ft_strlen(char *str);
long		ft_atoi(const char *str);
char		*ft_strlwr(char *s1);

/*
** DISPATCHER
*/

void		ft_initialize_specs(t_spec *specs);
void		ft_dispatcher(t_flag *f, va_list *ap);

/*
** HANDLERS: functions that handle specifiers
*/

void		ft_apply_mask(t_flag *f, int *mask);
void		ft_handler(t_flag *f);
int			ft_handler_s(t_flag *f, va_list *ap);
int			ft_handler_S(t_flag *f, va_list *ap);
int			ft_handler_c(t_flag *f, va_list *ap);
int			ft_handler_C(t_flag *f, va_list *ap);
int			ft_handler_d(t_flag *f, va_list *ap);
char		*ft_modifier_d(t_flag *f, va_list *ap);
int			ft_handler_D(t_flag *f, va_list *ap);
int			ft_handler_i(t_flag *f, va_list *ap);
char		*ft_modifier_i(t_flag *f, va_list *ap);
int			ft_handler_o(t_flag *f, va_list *ap);
char		*ft_modifier_o(t_flag *f, va_list *ap);
int			ft_handler_O(t_flag *f, va_list *ap);
int			ft_handler_u(t_flag *f, va_list *ap);
char		*ft_modifier_u(t_flag *f, va_list *ap);
int			ft_handler_U(t_flag *f, va_list *ap);
int			ft_handler_x(t_flag *f, va_list *ap);
char		*ft_modifier_x(t_flag *f, va_list *ap);
int			ft_handler_X(t_flag *f, va_list *ap);
char		*ft_modifier_X(t_flag *f, va_list *ap);
int			ft_handler_p(t_flag *f, va_list *ap);
int			ft_handler_undefined(t_flag *f);

/*
** ft_apply_flags.c
*/

void		ft_space_and_plus(t_flag *f);
void		ft_sharp(t_flag *f);
void		ft_precision(t_flag *f);

/*
** ft_width_and_precision.c
*/

void		len_of_precision_zero(t_flag *f, int len);
void		ft_zero(t_flag *f);
void		len_of_precision_minus(t_flag *f, int len);
void		ft_minus(t_flag *f);
void		ft_width(t_flag *f);
void		ft_precision_i(t_flag *f);

#endif
