/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 11:20:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/04 14:11:16 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** This function takes a wchar_t and writes it. It starts with big endian
** and move to lower endians thanks to masks and bit operations.
*/

void		ft_putwchar(wchar_t wchar, t_flag *f)
{
	int		size;

	size = ft_wcharlen(wchar);
	if (size == 1)
		ft_putchar(wchar, f);
	else if (size == 2)
	{
		ft_putchar((wchar >> 6) + 0xC0, f); // Je deplace de 6 sur la droite et j'ajoute 11000000
		ft_putchar((wchar & 0x3F) + 0x80, f); // Je filtre par 111111 et j'ajoute 10000000
	}
	else if (size == 3)
	{
		ft_putchar((wchar >> 12) + 0xE0, f); // Je deplace de 12 sur la droite et j'ajoute 11100000
		ft_putchar(((wchar >> 6) & 0x3F) + 0x80, f); // Je deplace de 6, je filtre par 111111 et j'ajoute 10000000
		ft_putchar((wchar & 0x3F) + 0x80, f); // Je filtre par 111111 et j'ajoute 10000000
	}
	else
	{
		ft_putchar((wchar >> 18) + 0xF0, f); // Je deplace de 18 sur la droite et j'ajoute 11110000
		ft_putchar(((wchar >> 12) & 0x3F) + 0x80, f); // Je deplace de 12 sur la droite, je filtre par 111111 et j'ajoute 10000000
		ft_putchar(((wchar >> 6) & 0x3F) + 0x80, f); // Je deplace de 6 sur la droite, je filtre par 111111 et j'ajoute 10000000
		ft_putchar((wchar & 0x3F) + 0x80, f); // Je filtre par 111111 et j'ajoute 10000000
	}
}
