/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:29:46 by nerraou           #+#    #+#             */
/*   Updated: 2021/12/03 08:05:56 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_hex(unsigned long nbr, int x)
{
	int		remainder;
	char	character;
	int		count;

	count = 0;
	if (nbr >= 16)
		count += to_hex(nbr / 16, x);
	remainder = nbr % 16;
	if (remainder >= 10)
		character = x + (remainder % 10);
	else
		character = remainder + '0';
	count += ft_putchar(character);
	return (count);
}
