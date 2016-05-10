#include <stdio.h>
#include <limits.h>
#include "../libftprintf.a"

int		main()
{
	int ret1;
	int ret2;
	int	ret;

	printf("TRUE :\n");
	ret = printf("{%05.s}{%04.9s}{%05s}{%5.3d}{%-5.3d}", 0, NULL, "1234", 12, 12);
	puts("");
	printf("ret : |%d|\n", ret);

	printf("\nMINE :\n");
	ret1 = ft_printf("{%05.s}{%s}", 0, NULL);
	puts("");
	printf("ret1 : |%d|\n", ret1);

	return (0);
}
