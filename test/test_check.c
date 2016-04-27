/*
**This file was used to check our check.c mainly.
*/

int 	main()
{
	t_flag	*f = (t_flag*)malloc(sizeof(t_flag));

	f->frmt = "%##### ##000000++++++--------56.2hhs";
	f->len = 34;
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
