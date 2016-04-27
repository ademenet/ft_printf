#include <stdio.h>
#include <stdlib.h>

int		main()
{
	printf( "%hhi\n", 300 );
	printf( "%hi\n", (short)300 );

	long a = 300, b = (long) 1.0E+14;
	printf( "%li\n%li\n", a, b );
	printf( "%lc:%ls\n", L'A', L"ABC" );

	printf( "%#llX\n", 300 );

	printf( "%ji\n", 17 );

	printf( "%zi\n", sizeof(int) );

	char al[5] = "abcd";
	printf( "%ti\n", &(al[3]) - &(al[1]) );

	printf( "%Lf\n", 3.14L );

	return (0);
}
