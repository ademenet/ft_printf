#include <stdio.h>
#include <stdlib.h>

int		main()
{
	printf("%#s", "1coucou"); // 2
	printf("%0s", "2coucou"); // 2
	printf("%-s", "3coucou"); // 1
	printf("%+s", "4coucou"); // 2
	printf("% s", "5coucou"); // 2
	printf("%hhs", "6coucou"); // 2
	printf("%hs", "7coucou"); // 2
	printf("%lls", "8coucou"); // 2
	printf("%ls", "9coucou"); // 2
	printf("%js", "10coucou"); // 2
	printf("%zs", "11coucou"); // 2

	return(0);
}
