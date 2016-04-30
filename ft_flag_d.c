/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/30 16:22:31 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_valid_d(t_flag *f)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};

	f->ndx = 1;
	ft_check_initialize(f);
	return (ft_check_flag(f, mask_s));
}

int		ft_handler(t_flag *f)
{
	int	i;
	int	k;

	f->ret = 0;
	k = -1;
	i = ft_strlen(f->arg);
	if (f->fla[0] > 0)
		ft_precision(f);
	if (f->fla[1] > 0)
		ft_width(f);
	if ((f->fla[5] == 1 || f->fla[6] == 1 || f->fla[2] == 1) &&
	(f->fla[0] == 0 && f->fla[1] == 0))
	{
		ft_space_and_plus(f);
		ft_sharp(f);
	}
	while (f->arg[++k] != '\0' && f->fla[1] == 0)
		f->ret += write(1, &f->arg[k], 1);
	if (f->ret == 0)
		return (-1);
	return (f->ret);
}

int 	main()
{
	t_flag	*f = (t_flag*)malloc(sizeof(t_flag));
	int	i;

	f->arg = "123";
	f->spe = 'o';
	f->fla[0] = 12; // precision
	f->fla[1] = 20; // width
	f->fla[2] = 1; // #
	f->fla[3] = 1; // 0
	f->fla[4] = 1; // -
	f->fla[5] = 0; // +
	f->fla[6] = 0; // | |

	// int nb = ft_check_valid_s(f);
	ft_putstr("===== MINE ======\n");

	i = ft_handler(f);

	ft_putstr("\n===== PRINTF ======\n");

	// printf("|% 012o|\n", 124);
	// printf("|%08o|\n", 124);
	// printf("|%+.10o|\n", 124);
	printf("%#-20.12o\n", 123);
	printf("%020.6d\n", 123);
	printf("%20.6d\n", 123);
	printf("%20.6D\n", 123);
	printf("%20.6i\n", 123);
	printf("%20.6o\n", 123);
	printf("%20.6u\n", 123);
	printf("%20.6x\n", 123);



	return (0);
}
