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


// In order to test our array of int :

/*
**printf("\nf->fla[0] = %d\n", f->fla[0]);
**printf("f->fla[1] = %d\n", f->fla[1]);
**printf("f->fla[2] = %d\n", f->fla[2]);
**printf("f->fla[3] = %d\n", f->fla[3]);
**printf("f->fla[4] = %d\n", f->fla[4]);
**printf("f->fla[5] = %d\n", f->fla[5]);
**printf("f->fla[6] = %d\n", f->fla[6]);
**printf("f->fla[7] = %d\n", f->fla[7]);
**printf("f->fla[8] = %d\n", f->fla[8]);
**printf("f->fla[9] = %d\n", f->fla[9]);
**printf("f->fla[10] = %d\n", f->fla[10]);
**printf("f->fla[11] = %d\n", f->fla[11]);
**printf("f->fla[12] = %d\n", f->fla[12]); getchar();
 */
