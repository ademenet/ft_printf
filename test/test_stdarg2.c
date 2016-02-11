#include <stdio.h>
#include <stdarg.h>

void myprintf(char *format, ...)
{
	va_list		pa;
	int			n;
	char		*s;
	char		c;
	float		f;

	va_start(pa, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format) {
				case '%': putchar('%'); break;
				case 'c': c = va_arg(pa, int); putchar(c); break;
				case 'd': n = va_arg(pa, int); printf("%d", n); break;
				case 'f': f = va_arg(pa, double); printf("%f", f); break; /* Pourquoi un double si on veut afficher un float ? */
				case 's': s = va_arg(pa, char*); for ( ; *s != '\0' ; s++) { putchar(*s); }; break;
			}
		}
		else
			putchar(*format);
		format++;
	}
	va_end(pa);
}

int main()
{
	myprintf("float = %f\n", (float) 1.2345789101112);
	myprintf("int = %d, char = %c, string = %s\n", 123, 'q', "Coucou !");
	return (0);
}