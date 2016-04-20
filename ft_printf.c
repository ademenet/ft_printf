/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 14:18:27 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/20 12:35:46 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putstr(va_list ap)
{
	char	*s;
	int		i;

	i = 0;
	s = va_arg(ap, char*);
	printf("\tdans ft_putstr : %s\n", s);
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void		ft_printf(char *str, ...)
{
	va_list		ap;
	fptr		fptrs[]=
	{
		{ 's', (*ft_putstr) },
		{ 'S', (*ft_putstr) },
		{ 0, NULL }
	};

	va_start(ap, str);
	// while (*str)
	// {
	// 	if (*str == '%')
	// 	{
	// 		str++;
	// 		if (*str == d)
	// 		{
	// 			d = va_arg(ap, int);
	// 			break;
	// 		}
	// 	}
	// 	str++;
	// }
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			while (fptrs[j].c != str[i] && fptrs[j].c != 0)
			{
				printf("fptrs[j].c = %c\tstr[i] = %c\n", fptrs[j].c, str[i]);
				i++;
				j++;
			}
			if (fptrs[j].c != 0)
			{
				fptrs[j].ptr(ap);
				j = 0;
				i = -1;
			}
		}
		i++;
	}
	va_end(ap);
}
