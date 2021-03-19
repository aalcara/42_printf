/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/19 11:27:54 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*printf_itoa(long int number, t_flags flags)
{
	char		*str;
	long int	negative_number;

	negative_number = -number;
	if (flags.zero_padded == 1 && number < 0)
		str = ft_itoa(negative_number);
	else
		str = ft_itoa(number);
	return (str);
}

static int		printf_negative_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;
	char 		padded;

	number_str = printf_itoa(number, flags);
	length = ft_strlen(number_str);
	if (flags.zero_padded == 1)
	{
		padded = '0';
		ft_putchar('-');
		length++;
	}
	else
		padded = ' ';
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	while (length < flags.min_width)
	{
		ft_putchar(padded);
		length++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(number_str);
	return (length);
}

static int		printf_positive_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;
	char 		padded;

	if (flags.zero_padded == 1)
		padded = '0';
	else
		padded = ' ';
	number_str = printf_itoa(number, flags);//! mudar de itoa para uma função que considera o precision e o sinal do number
	length = ft_strlen(number_str);
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	while (length < flags.min_width)
	{
		ft_putchar(padded);
		length++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(number_str);
	return (length);
}

int				printf_integer(t_flags flags, va_list args)
{
	int			length;
	int			number;

	number = va_arg(args, int);
	// printf("l:49 number = %d", number);//
	if (number < 0)
		length = printf_negative_integer(number, flags);
	else
		length = printf_positive_integer(number, flags);
	// number_str = ft_itoa(number_int);
	// length = ft_strlen(number);
	// if (flags.left_aligned == 1)
	// 	ft_putstr(number);
	// while (length < flags.min_width)
	// {
	// 	ft_putchar(' ');
	// 	length++;
	// }
	// if (flags.left_aligned == 0)
	// 	ft_putstr(number);
	return (length);
}
