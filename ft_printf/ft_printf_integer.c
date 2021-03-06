/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:25:11 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_pre_str(char *str_num, t_flags flags, int neg_signal)
{
	int			length;
	char		*pre_str;
	int			pre_str_len;

	length = ft_strlen(str_num);
	pre_str_len = flags.precision + neg_signal - length;
	if ((flags.precision + neg_signal) <= length)
		if (neg_signal == 0)
			pre_str = ft_calloc(2, sizeof(char));
		else
			pre_str = ft_calloc(2, sizeof(char));
	else
	{
		(pre_str = ft_calloc(sizeof(char), (pre_str_len + 1)));
		ft_memset((char *)pre_str, '0', pre_str_len);
	}
	if (!pre_str)
		return (NULL);
	if (neg_signal == 1)
		pre_str[0] = '-';
	return (pre_str);
}

static char		*printf_itoa(long int number, t_flags flags)
{
	char		*str;
	char		*str_num;
	char		*pre_str;
	int			neg_signal;

	if (flags.zero_padded == 1)
	{
		if (number < 0)
			str = ft_itoa(-number);
		else
			str = ft_itoa(number);
		return (str);
	}
	neg_signal = 0;
	if (number < 0)
	{
		neg_signal = 1;
		number = -number;
	}
	str_num = ft_itoa(number);
	pre_str = ft_pre_str(str_num, flags, neg_signal);
	str = ft_strjoin(pre_str, str_num);
	free(str_num);
	free(pre_str);
	return (str);
}

static int		printf_negative_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;

	length = ft_num_len(number);
	number_str = printf_itoa(number, flags);
	length = ft_strlen(number_str);
	if (flags.zero_padded == 1 && flags.precision == 0)
	{
		ft_putchar('-');
		length++;
		if (flags.left_aligned == 0)
			flags.padded = '0';
	}
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	while (length < flags.min_width)
	{
		ft_putchar(flags.padded);
		length++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(number_str);
	free(number_str);
	return (length);
}

static int		printf_positive_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;

	length = ft_num_len(number);
	if (flags.zero_padded == 1 && flags.left_aligned == 0)
		flags.padded = '0';
	if (flags.true_precision == 1 && flags.precision == 0 && number == 0)
		number_str = "\0";
	else
		number_str = printf_itoa(number, flags);
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	length = ft_strlen(number_str);
	while (length < flags.min_width)
	{
		ft_putchar(flags.padded);
		length++;
	}
	if (flags.left_aligned == 0)
		ft_putstr(number_str);
	if (flags.true_precision != 1 || flags.precision != 0 || number != 0)
		free(number_str);
	return (length);
}

int				printf_integer(t_flags flags, va_list args, int specifier)
{
	int			length;
	long int	number;

	if (flags.true_precision == 1)
		flags.zero_padded = 0;
	if (specifier == 'u')
		number = va_arg(args, unsigned int);
	else
		number = (long int)va_arg(args, int);
	if (number < 0)
		length = printf_negative_integer(number, flags);
	else
		length = printf_positive_integer(number, flags);
	return (length);
}
