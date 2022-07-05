#include "ft_printf.h"

size_t ptr_len(uintptr_t addr)
{
	size_t len;

	len = 0;
	while(addr != 0)
	{
			len++;
			addr /= 16;
	}
	return (len);
}

void print_ptr_alternate(uintptr_t num)
{
	char test[ptr_len(num) + 1];
	size_t len;

	len = ptr_len(num);
	test[len] = 0;

	while(num != 0)
	{
		if(num % 16 <= 9)
			test[--len] = num % 16 + '0';
		else
			test[--len] = num % 16 - 10 + 'a';
		num /= 16;
	}
	ft_putstr(test);
}

size_t	ptr_handler(uintptr_t addr)
{
	size_t len;

	len = 0;
	if(!addr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		ft_putstr("0x");
		len += 2;
		print_ptr_alternate(addr);
		return (len += ptr_len(addr));
	}
}