#include <stdio.h>
#include <stdarg.h>

int		somme(int n1, ...)
{
	va_list		pa;
	int			som, n;

	som = n1;
	va_start(pa, n1);
	while ((n = va_arg(pa, int)) != 0)
		som = som + n;
	va_end(pa);
	return (som);
}

int		main()
{
	printf("1 + 3 + 5 + 7 + 9 = %d\n", somme(1,3,5,7,9,0));
	printf("1 + 1  = %d\n", somme(1,1,0));
	return (0);
}