/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/26 16:42:01 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_check_valid_s(t_flag *f)
{
	static int	mask_s[11] = {2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};

	f->ndx = 1;
	ft_check_initialize(f);
	return (ft_check_flag(f, mask_s));
	/*
	**ft_check_flag(f, mask_s) ? 1 : 0;
	**ft_check_width ? ft_check_precision : 0;
	**ft_check_precision ? ft_check_modifier : 0;
	**ft_check_modifier ? 1 : 0;
	 */

	/*
	**if (ft_isdigit(f->frmt[i]))
	**{
	**	f->frmt = &f->frmt[i];
	**	ft_check_width(f);
	**}
	**if (f->frmt[i] == '.')
	**{
	**	f->frmt = &f->frmt[i];
	**	ft_check_precision(f);
	**}
	 */
}



/*
**void		ft_flag_s(t_flag *f, va_list ap)
**{
**	if(ft_check_valid(f) == 1)
**}
 */

int 	main()
{
	t_flag	*f = (t_flag*)malloc(sizeof(t_flag));

	f->frmt = "%50.1hhhhs";
	f->len = 89;
	int nb = ft_check_valid_s(f);
	printf("===== MAIN FONCTION !!! ======\n");
	printf("retour de fonction : %d\n", nb);
	printf("# = %d\n", f->flmo[0]);
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
