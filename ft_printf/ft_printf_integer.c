/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/22 11:08:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

static char		*precision_itoa(long int number, t_flags flags, int neg_signal)
{
	int			length;
	char		*str_num;
	char		*pre_str;
	int			pre_str_len;
	char		*full_str;

	length = ft_strlen(str_num = ft_itoa(number));
	if ((flags.precision + neg_signal) <= length)
	{
		if (neg_signal == 0)
			return (str_num);
		else
			pre_str = "-";
		return (ft_strjoin(pre_str, str_num));
	}
	pre_str_len = flags.precision + neg_signal - length;
	if(!(pre_str = ft_calloc(sizeof(char) , (pre_str_len + 1))))
		return (NULL);
	ft_memset((char *)pre_str, '0', pre_str_len);
	if (neg_signal == 1)
		pre_str[0] = '-';
	full_str = ft_strjoin(pre_str, str_num);
	free(pre_str);
	return (full_str);
}

static char		*printf_itoa(long int number, t_flags flags)
{
	char		*str;
	long int	negative_number;
	int			neg_signal;

	// printf("\nl:48\tEntrou printf_itoa");//
	neg_signal = 0;
	negative_number = -number;
	if (flags.precision == 0)
	{
		if (flags.zero_padded == 1 && number < 0)
			return (str = ft_itoa(negative_number));
		else
			return (str = ft_itoa(number));
	}
	if (number < 0)
	{
		neg_signal = 1;
		str = precision_itoa(negative_number, flags, neg_signal);
	}
	else
		str = precision_itoa(number, flags, neg_signal);
	return (str);
}

static int		printf_negative_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;
	char 		padded;

	// printf("l:68\tEntrou printf_negative");//
	length = ft_strlen(number_str = printf_itoa(number, flags));
	if (flags.zero_padded == 1 && flags.precision == 0)
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

	// printf("\nl:97\tEntrou printf_positive");//
	if (flags.zero_padded == 1 && flags.precision == 0)
		padded = '0';
	else
		padded = ' ';
	number_str = printf_itoa(number, flags);
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

int				printf_integer(t_flags flags, va_list args, int specifier)
{
	int			length;
	long int	number;

	// printf("\nl:121\tEntrou printf_integer");//
	if (specifier == 'u')
		number = va_arg(args, unsigned int);
	else
		number = (long int)va_arg(args, int);
		// printf("\nl:130 number = %d", number);//
	// printf("\nl:131 number =(long int) %ld", (long int)number);//
	if (number < 0)
		length = printf_negative_integer(number, flags);
	else
		length = printf_positive_integer(number, flags);
	return (length);
}