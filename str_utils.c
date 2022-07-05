#include "ft_printf.h"

size_t ft_putstr(char *s)
{
	size_t	len;

	if(!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	len = 0;
	while(s[len])
		write(1, &s[len++], 1);
	return (len);
}

size_t ft_putchar(int c)
{
	write(1, &c, 1);
	return  (1);
}

