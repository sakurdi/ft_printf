#include "ft_printf.h"

size_t uint_len(unsigned int nb)
{
	size_t len;
	unsigned int lnb;

	len = 0;
	lnb = nb;
	while(lnb != 0)
	{
		len++;
		lnb /= 10;
	}
	return (len);
}

void ft_uitoa(unsigned int nb)
{
	char res[15];
	unsigned int lnb;
	size_t len;

	len = uint_len(nb);
	res[len] = 0;
	lnb = nb;

	while(lnb != 0)
	{
		res[--len] = lnb % 10 + '0';
		//printf("in ft_uitoa res[%ld] = %c\n", len, lnb % 10 + '0');
		lnb /= 10;
	}
	ft_putstr(res);
}

size_t unsigned_handler(unsigned int nb)
{
	if(nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else
	{
		ft_uitoa(nb);
		return (uint_len(nb));
	}
}