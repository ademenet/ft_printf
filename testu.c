#include "ft_printf.h"

int			ft_get_flag_length(char *format, t_flag *flags)
{
	int		len;

	len = -1;
	while (format[++len] != '\0')
	{
		if (format[len] == 'c' || format[len] == 'C' || format[len] == 's' ||
			format[len] == 'S' || format[len] == '' ||)
	}
	return (len);
}


int		main()
{
	t_flag flags;
	int d = ft_get_flag_length("coucou\n", flags);
	printf("%d\n", d);
	return (0);
}
