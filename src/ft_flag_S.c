/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_S.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/03 12:46:56 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/10 17:47:48 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int			ft_handler_S(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2};
	wchar_t		*S;
	size_t		len;

	S = va_arg(*ap, wchar_t*);
	len = ft_wstrlen(S);
	printf("%zu\n", len);
	while (len > 0)
	{
		ft_putwchar(*S, f);
		S++;
		len--;
	}
	return (0);
}
