#include "ft_printf.h"

void to_upper(char *s)
{
	while(*s)
	{
		if(*s >= 'a' && *s <= 'f')
			ft_putchar(*s - 32);
		else
			ft_putchar(*s);
		s++;
	}
}

size_t hex_len(unsigned int n)
{
	size_t len;

	len = 0;
	while(n != 0)
	{
			len++;
			n /= 16;
	}
	return (len);
}

void print_hex(unsigned int num, int is_upper)
{
	char test[hex_len(num) + 1];
	size_t len;

	len = hex_len(num);
	test[len] = 0;

	while(num != 0)
	{
		if(num % 16 <= 9)
			test[--len] = num % 16 + '0';
		else
			test[--len] = num % 16 - 10 + 'a';
		num /= 16;
	}
	if(is_upper)
		to_upper(test);
	else
		ft_putstr(test);
}

size_t hex_handler(unsigned int nb, int is_upper)
{
	if(nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		print_hex(nb, is_upper);
		return (hex_len(nb));
	}
}