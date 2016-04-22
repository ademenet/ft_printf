/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 18:05:14 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/22 11:08:32 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

/*
** This function returns length from '%' + 1 char until the first specifier met.
*/

int			ft_get_flag_length(char *format)
{
	int		len;

	len = 0;
	while (format[++len] != '\0')
	{
		if (format[len] == 'd' || format[len] == 'D' || format[len] == 'i' ||
			format[len] == 'o' || format[len] == 'O' || format[len] == 'u' ||
			format[len] == 'U' || format[len] == 'x' || format[len] == 'X' ||
			format[len] == 'c' || format[len] == 'C' || format[len] == 'p' ||
			format[len] == 's' || format[len] == 'S' || format[len] == '%')
			return (len);
	}
	return (0);
}

/*
**char		*ft_parsing(char *format, int len, t_flag *flags)
**{
**	char	*parse;
**	int		i;
**	parse = (char*)malloc(sizeof(char) * len + 1);
**	parse[len] = '\0';
**	while (i < len)
**	{
**		parse[i] = format[i];
**	}
**	return (parse);
**}
*/
