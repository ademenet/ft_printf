/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/28 10:19:46 by ademenet         ###   ########.fr       */
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

	va_list		ap;

	/*
	** fla[13] is an array which contains flags for precision, width, flags
	** and modifiers such as:
	** |0        |1    |2|3|4|5|6|7 |8|9 |10|11|12|
	** |precision|width|#|0|-|+| |hh|h|ll|l |j |z |
	*/

	int			fla[13];

	char		*arg;

/*
** |0|1|2|3|4|5 |6|7 |8|9|10| == 11
** |#|0|-|+| |hh|h|ll|l|j|z |
*/
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

/*
**typedef struct	s_spec
**{
**	char		c;
**	void		(*ptr)(*t_flag, *va_list);
**}				t_spec;
 */

/*
** ft_display.c
*/

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);

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
** other functions
*/

int			ft_isdigit(int c);
long		ft_atoi(const char *str);
char		*ft_strsub(char const *s, unsigned int start, size_t len);



#endif
