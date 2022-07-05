/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sal-kurd <sal-kurd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:04:17 by sal-kurd          #+#    #+#             */
/*   Updated: 2022/07/05 19:33:20 by sal-kurd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

size_t	ft_putchar(int c);
size_t	ft_putstr(char *s);
size_t	format_check(va_list argptr, char c);
size_t	ptr_handler(uintptr_t addr);
size_t	nb_handler(int nb);
size_t	unsigned_handler(unsigned int nb);
size_t	hex_handler(unsigned int nb, int is_upper);
int		ft_printf(const char *format, ...);

#endif