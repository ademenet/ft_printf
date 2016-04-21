/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 18:05:14 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/21 18:40:12 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int			ft_get_flag_length(char *format, t_flag *flags)
{
	int		len;

	len = 0;
	printf("get flag len\n");
	printf("%s\n", format);
	while (format[len] != 'd' || format[len] != 'D' || format[len] != 'i' ||
			format[len] != 'o' || format[len] != 'O' || format[len] != 'u' ||
			format[len] != 'U' || format[len] != 'x' || format[len] != 'X' ||
			format[len] != 'c' || format[len] != 'C' || format[len] != 'p' ||
			format[len] != 's' || format[len] != 'S' || format[len] != '\0')
		{len++;}
	return (len);
}


char		*ft_parsing(char *format, int len, t_flag *flags)
{
	char	*parse;
	int		i;

	parse = (char*)malloc(sizeof(char) * len + 1);
	parse[len] = '\0';
	while (i < len)
	{
		parse[i] = format[i];
	}
	return (parse);
}

int		main()
{
	t_flag	flags;
	char	format[] = "coucou %s iiajsag";

	printf("%d\n", ft_get_flag_length(format, &flags));
	// printf("%s\n", ft_parsing(format, ft_get_flag_length(format, &flags), &flags));
	return (0);
}
