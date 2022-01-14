/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:43:33 by nerraou           #+#    #+#             */
/*   Updated: 2021/12/03 12:01:15 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar((unsigned char)va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, const char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbru(va_arg(args, unsigned int));
	else if (format == 'x')
		count += to_hex(va_arg(args, unsigned int), 97);
	else if (format == 'X')
		count += to_hex(va_arg(args, unsigned int), 65);
	else if (format == 'p')
	{
		count += ft_putstr("0x");
		count += to_hex(va_arg(args, unsigned long), 97);
	}
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}
