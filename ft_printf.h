/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/21 18:33:50 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#include <stdio.h> //A EFFACER !!!

typedef struct	s_flag
{
	char		type;

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


char		*ft_parsing(char *format, int len, t_flag *flags);
int			ft_get_flag_length(char *format, t_flag *flags);
/*
** Initialize our struct array with char and function pointers.
*/
// void		initialize_t_fptr(t_fptr *fptrs);
// void		initialize_t_fptr_end(t_fptr *fptrs);

/*
** Main functions.
*/
// void		ft_printf(char *str, ...);

#endif
