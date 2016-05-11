/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:59:17 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/11 16:00:40 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

size_t		ft_wbytelen(wchar_t *S)
{
	size_t	len;
	size_t	bytelen;

	len = ft_wstrlen(S);
	bytelen = 0;
	while (len > 0)
	{
		bytelen += ft_wcharlen(*S);
		S++;
		len--;
	}
	return (bytelen);
}

size_t		ft_wstrlen(wchar_t *S)
{
	size_t	len;

	len = 0;
	if (!S)
		return (0);
	while (*(S++))
		len++;
	return (len);
}
