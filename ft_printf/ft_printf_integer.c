/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/23 15:30:22 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

char			*ft_free(char *str, int len)
{
	char			str_aux[len + 1];
	static char		*str_ret;
	int				i;

	i = 0;
	while (i < len)
	{
		str_aux[i] = str[i];
		i++;
	}
	str_aux[len] = '\0';
	str_ret = str_aux;
	free(str);
	return (str_ret);
}

char			*ft_pre_str(char *str_num, t_flags flags, int neg_signal)
{
	int			length;
	char		*pre_str;
	int			pre_str_len;

	// printf("\nl:40\tEntrou printf_positive");//
	length = ft_strlen(str_num);
	pre_str_len = flags.precision + neg_signal - length;
	if ((flags.precision + neg_signal) <= length)
		if (neg_signal == 0)
			pre_str = ft_calloc(2, sizeof(char));
		else
			pre_str = ft_calloc(2, sizeof(char));
	else
	{
		(pre_str = ft_calloc(sizeof(char) , (pre_str_len + 1)));
		ft_memset((char *)pre_str, '0', pre_str_len);
	}
	if (!pre_str)
		return (NULL);
	if (neg_signal == 1)
		pre_str[0] = '-';
	// printf("\nl:57\tneg_signal = %d\n", neg_signal);//
	// printf("\nl:58\tpre_str = %s\n", pre_str);//
	return (pre_str);
}

static char		*precision_itoa(long int number, t_flags flags, int neg_signal)
{
	char		*str_num;
	char		*pre_str;
	char		*full_str;
	char		*full_freed;

	str_num = ft_itoa(number);
	pre_str = ft_pre_str(str_num, flags, neg_signal);
	full_str = ft_strjoin(pre_str, str_num);
	free(str_num);
	free(pre_str);
	full_freed = ft_free(full_str, ft_strlen(full_str));
	// printf("\nbefore free: %s", full_freed);

	// printf("\nafter free: %s\n", full_freed);
	return (full_freed);
	// return (full_str);
}

static char		*printf_itoa(long int number, t_flags flags, int length)
{
	char		*str;
	long int	negative_number;
	int			neg_signal;
	char		freed_str[length + 1];
	static char	*freed_str_ptr;

	// printf("\nl:90\tEntrou printf_itoa number = %ld, length = %d\n", number, length);//
	neg_signal = 0;
	negative_number = -number;
	// if ((flags.precision == 0 && flags.true_precision == 1) || flags.zero_padded == 1)
	if (flags.zero_padded == 1)
	{
		if (number < 0)
			str = ft_itoa(negative_number);
		else
			str = ft_itoa(number);
		ft_memcpy((void *)freed_str, (void *)str, length);
		freed_str[length] = '\0';
		free(str);
		freed_str_ptr = freed_str;
		return (freed_str_ptr);
		// return (str);
	}
	// printf("\nl:107\tEntrou printf_itoa number = %ld, length = %d\n", number, length);//
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

	// printf("\nl:124\tEntrou printf_negative\n");//
	// printf("\nl:125\tprintf_negative number = %ld\n", number);//
	length = ft_num_len(number);
	// printf("\nl:101\tprintf_negative length = %d\n", length);//
	number_str = printf_itoa(number, flags, length);
	length = ft_strlen(number_str);
	if (flags.zero_padded == 1 && flags.precision == 0)//!
	{
		padded = '0';
		ft_putchar('-');
		length++;
	}
	else
		padded = ' ';
	// printf("\nl:138\tprintf_negative number_str = %s\n", number_str);//
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


	// printf("\nl:158\tEntrou printf_positive\n");//
	length = ft_num_len(number);
	if (flags.zero_padded == 1 && flags.true_precision == 0 && flags.left_aligned == 0)
		padded = '0';
	else
		padded = ' ';
	if (flags.true_precision == 1 && flags.precision == 0 && number == 0)
		number_str = "\0";
	else
		number_str = printf_itoa(number, flags, length);
	if (flags.left_aligned == 1)
		ft_putstr(number_str);
	length = ft_strlen(number_str);
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
	if (flags.true_precision == 1)
		flags.zero_padded = 0;
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
