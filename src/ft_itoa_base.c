/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 17:24:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/05 11:15:49 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

uintmax_t		ft_sign(t_flag *f, intmax_t nbr)
{
	f->sign = '+';
	if (nbr < 0)
	{
		f->sign = '-';
		nbr = -nbr;
	}
	return ((uintmax_t)nbr);
}

char			*ft_itoa_base(uintmax_t nbr, int base)
{
	static char	convert[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
	'9', 'A', 'B', 'C', 'D', 'E', 'F'};
	intmax_t	i;
	intmax_t	n;
	uintmax_t	converted_nbr[64];
	char		*result;

	if (nbr == 0)
		return ("0");
	i = 0;
	n = (intmax_t)nbr;
	while (n > 0)
	{
		converted_nbr[i++] = (uintmax_t)n % (uintmax_t)base;
		n /= (uintmax_t)base;
	}
	result = (char*)malloc(sizeof(char) * --i);
	while (i >= 0)
		result[n++] = convert[converted_nbr[i--]];
	return (result);
}
