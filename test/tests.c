#include <stdio.h>
#include <stdlib.h>

// tests s
int		main()
{
	printf("%#s\n", "1coucou"); // 2
	printf("%0s\n", "2coucou"); // 2
	printf("%-s\n", "3coucou"); // 1
	printf("%+s\n", "4coucou"); // 2
	printf("% s\n", "5coucou"); // 2
	printf("%hhs\n", "6coucou"); // 2
	printf("%hs\n", "7coucou"); // 2
	printf("%lls\n", "8coucou"); // 2
	printf("%ls\n", "9coucou"); // 2
	printf("%js\n", "10coucou"); // 2
	printf("%zs\n", "11coucou"); // 2
	printf("|%.5s|\n", "coucou");
	printf("|%5s|\n", "coucou");
	printf("|%10s|\n", "coucou");
	printf("|%010s|\n", "coucou");
	printf("|%5.5s|\n", "coucou");
	printf("|%10.5s|\n", "coucou");
	printf("|%5.10s|\n", "coucou");




	return(0);
}

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
