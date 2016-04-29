/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 17:24:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/29 17:47:53 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// ATTENTION : la mise a la norme a peut etre un peu inlcus des bugs, a refaire en mieux.

static void		is_negative(int nbr, char *result, int n)
{
	if (nbr < 0)
	{
		result[0] = '-';
		n = 1;
	}
}

char			*ft_itoa_base(int nbr, int base)
{
	static char	convert[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8',
	'9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int			converted_nbr[64];
	int			i;
	int			n;
	char		*result;

	i = 0;
	n = nbr;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		converted_nbr[i++] = n % base;
		n /= base;
	}
	result = (char*)malloc(sizeof(char) * --i);
	is_negative(nbr, result, n);
	while (i >= 0)
		result[n++] = convert[converted_nbr[i--]];
	return (result);
}
