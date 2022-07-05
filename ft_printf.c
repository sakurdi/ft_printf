#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list argptr;
	va_start(argptr, format);
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while(format[i])
	{
		if(format[i] == '%' && format[i + 1])
		{
			i++;
			//printf("found specifier %c\n", format[i]);
			len += format_check(argptr, format[i]);
		}
		else
		{
			len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(argptr);
	return (len);
}

/*int main()
{
	char *test = NULL;
	size_t size, size2;
	size = ft_printf("%xsalut%X%s%c%uhello\n", 6502, 2042,"mdr", 'e', -869842);
	size2 = printf("%xsalut%X%s%c%uhello\n", 6502, 2042,"mdr", 'e', -869842);
	printf("ft_printf->%ld OG printf->%ld\n", size, size2);
	//printf("%p\n", (void*)test);
	
}*/