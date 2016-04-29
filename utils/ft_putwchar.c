/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/29 11:20:08 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/29 15:27:54 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
** This function takes a wchar_t and writes it. It starts with big endian
** and move to lower endians thanks to masks and bit operations.
*/

void		ft_putwchar(wchar_t wchar)
{
	int		size;

	size = ft_wchar_len(wchar);
	if (size == 1)
		ft_putchar(wchar);
	else if (size == 2)
	{
		ft_putchar((wchar >> 6) + 0xC0); // Je deplace de 6 sur la droite et j'ajoute 11000000
		ft_putchar((wchar & 0x3F) + 0x80); // Je filtre par 111111 et j'ajoute 10000000
	}
	else if (size == 3)
	{
		ft_putchar((wchar >> 12) + 0xE0); // Je deplace de 12 sur la droite et j'ajoute 11100000
		ft_putchar(((wchar >> 6) & 0x3F) + 0x80); // Je deplace de 6, je filtre par 111111 et j'ajoute 10000000
		ft_putchar((wchar & 0x3F) + 0x80); // Je filtre par 111111 et j'ajoute 10000000
	}
	else
	{
		ft_putchar((wchar >> 18) + 0xF0); // Je deplace de 18 sur la droite et j'ajoute 11110000
		ft_putchar(((wchar >> 12) & 0x3F) + 0x80); // Je deplace de 12 sur la droite, je filtre par 111111 et j'ajoute 10000000
		ft_putchar(((wchar >> 6) & 0x3F) + 0x80); // Je deplace de 6 sur la droite, je filtre par 111111 et j'ajoute 10000000
		ft_putchar((wchar & 0x3F) + 0x80); // Je filtre par 111111 et j'ajoute 10000000
	}
}
