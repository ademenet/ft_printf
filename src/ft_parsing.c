/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 18:05:14 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/25 17:58:17 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** This function returns length from '%' + 1 char until the first specifier met.
*/

int			ft_get_flag_length(char *frmt)
{
	int		len;

	len = 0;
	while (frmt[++len] != '\0')
	{
		if (frmt[len] == 'd' || frmt[len] == 'D' || frmt[len] == 'i' ||
			frmt[len] == 'o' || frmt[len] == 'O' || frmt[len] == 'u' ||
			frmt[len] == 'U' || frmt[len] == 'x' || frmt[len] == 'X' ||
			frmt[len] == 'c' || frmt[len] == 'C' || frmt[len] == 'p' ||
			frmt[len] == 's' || frmt[len] == 'S' || frmt[len] == '%')
			return (len);
	}
	return (0);
}

/*
**char		*ft_parsing(char *frmt, int len, t_flag *f)
**{
**	char	*parse;
**	int		i;
**	parse = (char*)malloc(sizeof(char) * len + 1);
**	parse[len] = '\0';
**	while (i < len)
**	{
**		parse[i] = frmt[i];
**	}
**	return (parse);
**}
*/
