/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/27 15:34:28 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/02 10:01:02 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int			ft_check_valid_c(t_flag *f, char ap)
{
	static int	mask_c[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	// char		c;
	f->ndx = 1;
	ft_check_initialize(f);
	if (ft_check_flag(f, mask_c))
		exit(-1);
	// c = va_arg(ap, char);
	ft_handler_c(f, ap);
	return (0);
}

// TODO : faire une variable pour stocker '0' ou ' ' et refactoriser

int			ft_handler_c(t_flag *f, char c)
{
	int		i;

	i = 1;
	if (f->width > 0 && f->flmo[8] != 1) // si j'ai une 'largeur' et que je n'ai pas de 'l'
	{
		if (f->flmo[2] != 1) // si je n'ai pas de '-'
		{
			while (i++ < f->width)
				ft_putchar(' ');
			ft_putchar(c);
		}
		else if (f->flmo[1] == 2) // si j'ai un '0'
		{
			while (i++ < f->width)
				ft_putchar('0');
			ft_putchar(c);
		}
		else
		{
			while (i++ < f->width)
				ft_putchar(' ');
			ft_putchar(c);
		}
	}
	else
		ft_putchar(c);
	return (1);
}

int			main()
{
	t_flag	*f = (t_flag*)malloc(sizeof(t_flag));

	f->frmt = "%##0+ 5.1c";
	f->len = 12;
	ft_check_valid_c(f, 'd');
	printf("\n# = %d\n", f->flmo[0]);
	printf("0 = %d\n", f->flmo[1]);
	printf("- = %d\n", f->flmo[2]);
	printf("+ = %d\n", f->flmo[3]);
	printf("| | = %d\n", f->flmo[4]);
	printf("width = %d\n", f->width);
	printf("precision = %d\n", f->precision);
	printf("hh = %d\n", f->flmo[5]);
	printf("h = %d\n", f->flmo[6]);
	printf("ll = %d\n", f->flmo[7]);
	printf("l = %d\n", f->flmo[8]);
	printf("j = %d\n", f->flmo[9]);
	printf("z = %d\n", f->flmo[10]);
	return (0);
}
