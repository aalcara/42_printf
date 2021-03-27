/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:51:59 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:41:28 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		get_left_align(int prenum_len, t_flags flags)
{
	int			total_len;

	total_len = prenum_len;
	if (flags.left_aligned == 1)
		return (total_len);
	while (total_len < flags.min_width)
	{
		ft_putchar(flags.padded);
		total_len++;
	}
	return (total_len);
}

static int		get_precision(int num_len, t_flags flags)
{
	int			prenum_len;
	int			total_len;

	prenum_len = num_len;
	if (flags.precision > num_len)
		prenum_len = flags.precision;
	if (flags.pointer == 1)
		prenum_len += 2;
	total_len = get_left_align(prenum_len, flags);
	if (flags.pointer == 1)
		ft_putstr("0x");
	while (num_len < flags.precision)
	{
		ft_putchar('0');
		num_len++;
	}
	return (total_len);
}

static int		get_hexa_num(unsigned long int nbr, t_flags flags)
{
	char		*hexa_str;
	int			num_len;
	int			total_len;
	int			start_num_len;

	num_len = 0;
	if (flags.true_precision != 1 || flags.precision != 0 || nbr != 0)
		num_len = ft_hexa_len(nbr);
	start_num_len = num_len;
	hexa_str = ft_hexa_atoi(nbr, num_len, flags);
	total_len = get_precision(start_num_len, flags);
	ft_putstr(hexa_str);
	free(hexa_str);
	return (total_len);
}

int				printf_hexadecimal(t_flags flags, va_list args)
{
	int					total_len;
	unsigned long int	number;

	if (flags.pointer == 1)
		number = va_arg(args, unsigned long int);
	else
		number = va_arg(args, unsigned int);
	if (flags.true_precision == 1)
		flags.zero_padded = 0;
	if (flags.zero_padded == 1 && flags.left_aligned == 0)
		flags.padded = '0';
	total_len = get_hexa_num(number, flags);
	while (total_len < flags.min_width)
	{
		ft_putchar(flags.padded);
		total_len++;
	}
	return (total_len);
}
