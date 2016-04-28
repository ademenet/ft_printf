#include <stdio.h>
#include <stdlib.h>

// test o
int		main()
{
	printf("|%o|\n", 123);
	printf("|%.1o|\n", 123);
	printf("|%.5o|\n", 123);
	printf("|%2o|\n", 123);
	printf("|%5o|\n", 123);
	printf("|%05o|\n", 123);
	printf("|%#5o|\n", 123);
	printf("|%-5o|\n", 123);
	printf("|%+5o|\n", 123);
	printf("|%+5o|\n", -123);
	printf("|% 5o|\n", 123);
	printf("|% o|\n", 123);
	printf("|%o|\n", 2147483648);
	printf("|%o|\n", -2147483649);
	return(0);
}

// test x
/*
**int		main()
**{
**	printf("|%x|\n", 123);
**	printf("|%.1x|\n", 123);
**	printf("|%.5x|\n", 123);
**	printf("|%2x|\n", 123);
**	printf("|%5x|\n", 123);
**	printf("|%05x|\n", 123);
**	printf("|%#5x|\n", 123);
**	printf("|%-5x|\n", 123);
**	printf("|%+5x|\n", 123);
**	printf("|%+5x|\n", -123);
**	printf("|% 5x|\n", 123);
**	printf("|% x|\n", 123);
**	printf("|%x|\n", 2147483648);
**	printf("|%x|\n", -2147483649);
**	return(0);
**}
 */


// test d
/*
**int		main()
**{
**	printf("|%d|\n", 123);
**	printf("|%.1d|\n", 123);
**	printf("|%.5d|\n", 123);
**	printf("|%2d|\n", 123);
**	printf("|%5d|\n", 123);
**	printf("|%05d|\n", 123);
**	printf("|%#5d|\n", 123);
**	printf("|%-5d|\n", 123);
**	printf("|%+5d|\n", 123);
**	printf("|%+5d|\n", -123);
**	printf("|% 5d|\n", 123);
**	printf("|% d|\n", 123);
**	printf("|%d|\n", 2147483648);
**	printf("|%d|\n", -2147483649);
**	return(0);
**}
 */

// tests s
/*
**int		main()
**{
**	printf("%#s\n", "1coucou"); // 2
**	printf("%0s\n", "2coucou"); // 2
**	printf("%-s\n", "3coucou"); // 1
**	printf("%+s\n", "4coucou"); // 2
**	printf("% s\n", "5coucou"); // 2
**	printf("%hhs\n", "6coucou"); // 2
**	printf("%hs\n", "7coucou"); // 2
**	printf("%lls\n", "8coucou"); // 2
**	printf("%ls\n", "9coucou"); // 2
**	printf("%js\n", "10coucou"); // 2
**	printf("%zs\n", "11coucou"); // 2
**	printf("|%.5s|\n", "coucou");
**	printf("|%5s|\n", "coucou");
**	printf("|%10s|\n", "coucou");
**	printf("|%010s|\n", "coucou");
**	printf("|%5.5s|\n", "coucou");
**	printf("|%10.5s|\n", "coucou");
**	printf("|%5.10s|\n", "coucou");
**
**
**
**
**	return(0);
**}
 */

// tests c
/*
**int		main()
**{
**	printf("%#c\n", 'c'); // 2
**	printf("%0c\n", 'c'); // 2
**	printf("%-c\n", 'c'); // 1
**	printf("%+c\n", 'c'); // 2
**	printf("% c\n", 'c'); // 2
**	printf("%hhc\n", 'c'); // 2
**	printf("%hc\n", 'c'); // 2
**	printf("%llc\n", 'c'); // 2
**	printf("%lc\n", 'c'); // 1
**	printf("%jc\n", 'c'); // 2
**	printf("%zc\n", 'c'); // 2
**	printf("|%5c|\n", 'c');
**	printf("|%.1c|\n", 'c');
**
**
**	return(0);
**}
 */
