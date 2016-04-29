/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:20:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/04/28 10:59:03 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_handler_s(t_flag *f, va_list *ap)
{
	static int	mask_s[13] = {0, 0, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2};
	char		*str;

	f->ndx = 1;
	ft_check_initialize(f);
	ft_check_flag(f, mask_s);
	str = va_arg(*ap, char*);


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

	f->frmt = "%##### ##000000++++++--------56.2hhs";
	f->len = 34;
	int nb = ft_check_valid_s(f);
	printf("===== MAIN FONCTION !!! ======\n");
	printf("retour de fonction : %d\n", nb);
	printf("# = %d\n", f->fla[2]);
	printf("0 = %d\n", f->fla[3]);
	printf("- = %d\n", f->fla[4]);
	printf("+ = %d\n", f->fla[5]);
	printf("| | = %d\n", f->fla[6]);
	printf("width = %d\n", f->fla[1]);
	printf("precision = %d\n", f->fla[0]);
	printf("hh = %d\n", f->fla[7]);
	printf("h = %d\n", f->fla[8]);
	printf("ll = %d\n", f->fla[9]);
	printf("l = %d\n", f->fla[10]);
	printf("j = %d\n", f->fla[11]);
	printf("z = %d\n", f->fla[12]);
	return (0);
}
