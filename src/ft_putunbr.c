/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:33:24 by nerraou           #+#    #+#             */
/*   Updated: 2021/12/02 18:34:08 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	int	count;

	count = 0;
	if (n / 10)
		count += ft_putnbru(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
