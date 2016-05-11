/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:26:11 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/11 10:57:35 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../include/ft_printf.h"

wchar_t		*ft_wstrsub(wchar_t *S, unsigned int start, size_t len)
{
	char	*fresh;
	int		real_len;
	int		i;

	real_len = 0;
	i = 0;
	while (S[i] != '\0' && len >= ft_wcharlen(S[i]))
	{
		len -= ft_wcharlen(S[i]);
		real_len += ft_wcharlen(S[i]);
		i++;
	}
	return ((wchar_t*)ft_strsub((char*)S, start, real_len));
}
