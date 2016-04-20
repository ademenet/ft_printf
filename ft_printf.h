/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:27:23 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/20 11:49:19 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

#include <stdio.h> //A EFFACER !!!


typedef struct	fptr
{
   char			c;
   void			(*ptr)(va_list);
} 				fptr;

void		ft_printf(char *str, ...);
void		ft_putstr(va_list ap);

#endif
