#include "ft_printf.h"

size_t format_check(va_list argptr, char c)
{
	size_t len;

	len = 0;
	if(c == 'c')
		len += ft_putchar(va_arg(argptr, int));
	else if(c == 's')
		len += ft_putstr(va_arg(argptr, char *));
	else if(c == 'p')
		len += ptr_handler(va_arg(argptr, uintptr_t));
	else if(c == '%')
		len += ft_putchar('%');
	else if(c == 'd')
		len += nb_handler(va_arg(argptr, int));
	else if(c == 'i')
		len += nb_handler(va_arg(argptr, int));
	else if(c == 'u')
		len += unsigned_handler(va_arg(argptr, unsigned int));
	else if(c == 'x')
		len += hex_handler(va_arg(argptr, unsigned int), 0);
	else if(c == 'X')
		len += hex_handler(va_arg(argptr, unsigned int), 1);
	return (len);
		 
}