#include <stdio.h>
#define YEAR 2016

int	main()
{
	printf("%-30s %c, %c, %c, %c.\n", "Caracteres :", 'a', 65, 0x31, '0');
	printf("Entiers : %d, %i\n", YEAR, 650000);
	printf("Affichage des espaces : |%10d|\n", YEAR);
	printf("Affichage des zéros : |%010d|\n", YEAR);
	printf("Différentes bases : %d, %x, %o, %#x, %#o\n", 100, 100, 100, 100, 100);
	printf("Largeur en argument : |%*d|\n", 5, 100);
	printf("%s\n", "Fin");
	return (0);
}