/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:50:30 by nerraou           #+#    #+#             */
/*   Updated: 2021/12/03 13:47:47 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(unsigned char c);
int	ft_strlen(const char *str);
int	ft_putstr(const char *str);
int	ft_putnbr(int n);
int	ft_putnbru(unsigned int n);
int	to_hex(unsigned long nbr, int x);
int	ft_printf(const char *str, ...);
int	ft_printf_format(char format, va_list args);

#endif