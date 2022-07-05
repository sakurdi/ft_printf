#include "ft_printf.h"

size_t int_len(int nb)
{
	size_t len;
	unsigned int lnb;

	if(nb < 0)
		lnb = -nb;
	else
		lnb = nb;
	len = 0;
	while(lnb != 0)
	{
		len++;
		lnb /= 10;
	}
	return (len);
}

void ft_itoa(int nb)
{
	char res[15];
	unsigned int lnb;
	size_t len;

	len = int_len(nb);
	res[len + 1] = 0;
	if(nb < 0)
		lnb = -nb;
	else
		lnb = nb;

	while(lnb != 0)
	{
		res[len--] = lnb % 10 + '0';
		//printf("in ft_itoa res[%ld] = %c\n", len, lnb % 10 + '0');
		lnb /= 10;
	}
	if(nb < 0)
	{
		res[len] = '-';
		ft_putstr(res);
	}
	else
		ft_putstr(res + 1);
}

size_t nb_handler(int nb)
{
	if(nb == 0)
	{
		ft_putchar('0');
		return 1;
	}
	else
	{
		ft_itoa(nb);
		if(nb < 0)
			return (int_len(nb) + 1);
		else
			return (int_len(nb));
	}
}