/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:04:17 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/07/05 19:29:06 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	va_start(argptr, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
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