/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer copy.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 17:07:10 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static char		*precision_itoa(long int number, t_flags flags)
// {
// 	char		*str_num;
// 	char		*pre_str;
// 	char		*full_str;
// 	// char		*full_freed;
// 	int			neg_signal;


// 	neg_signal = 0;
// 	if (number < 0)
// 	{
// 		neg_signal = 1;
// 		number = - number;
// 	}
// 	str_num = ft_itoa(number);
// 	pre_str = ft_pre_str(str_num, flags, neg_signal);
// 	full_str = ft_strjoin(pre_str, str_num);
// 	// free(str_num);
// 	// free(pre_str);
// 	// full_freed = ft_free(full_str, ft_strlen(full_str));
// 	// return (full_freed);
// 	return (full_str);
// }

// static char		*printf_itoa(long int number, t_flags flags)//, int length)
// {
// 	char		*str;
// 	// char		freed_str[length + 1];
// 	// char		*freed_str;
// 	// static char	*freed_str_ptr;


// 	if (flags.zero_padded == 1)
// 	{
// 		if (number < 0)
// 			str = ft_itoa(-number);
// 		else
// 			str = ft_itoa(number);
// 		// ft_memcpy((void *)freed_str, (void *)str, length);
// 		// freed_str[length] = '\0';
// 		// free(str);
// 		// freed_str_ptr = freed_str;
// 		// return (freed_str_ptr);
// 		return (str);
// 	}
// 	str = precision_itoa(number, flags);
// 	return (str);
// }

// static int		printf_negative_integer(long int number, t_flags flags)
// {
// 	char		*number_str;
// 	int			length;

// 	length = ft_num_len(number);
// 	// printf("\n\nl:69\t number = %li", number);
// 	// printf("\nl:70\t length = %d\n", length);
// 	number_str = printf_itoa(number, flags);//, length);
// 	// printf("l:72\t number_str = %s\n\n", number_str);
// 	length = ft_strlen(number_str);
// 	if (flags.zero_padded == 1 && flags.precision == 0)
// 	{
// 		ft_putchar('-');
// 		length++;
// 		if (flags.left_aligned == 0)
// 			flags.padded = '0';
// 	}
// 	if (flags.left_aligned == 1)
// 		ft_putstr(number_str);
// 	while (length < flags.min_width)
// 	{
// 		ft_putchar(flags.padded);
// 		length++;
// 	}
// 	if (flags.left_aligned == 0)
// 		ft_putstr(number_str);
// 	return (length);
// }

// static int		printf_positive_integer(long int number, t_flags flags)
// {
// 	char		*number_str;
// 	int			length;

// 	length = ft_num_len(number);
// 	if (flags.zero_padded == 1 && flags.left_aligned == 0)
// 		flags.padded = '0';
// 	if (flags.true_precision == 1 && flags.precision == 0 && number == 0)
// 		number_str = "\0";
// 	else
// 		number_str = printf_itoa(number, flags);//, length);
// 	if (flags.left_aligned == 1)
// 		ft_putstr(number_str);
// 	length = ft_strlen(number_str);
// 	while (length < flags.min_width)
// 	{
// 		ft_putchar(flags.padded);
// 		length++;
// 	}
// 	if (flags.left_aligned == 0)
// 		ft_putstr(number_str);
// 	return (length);
// }

// int				printf_integer(t_flags flags, va_list args, int specifier)
// {
// 	int			length;
// 	long int	number;

// 	if (flags.true_precision == 1)
// 		flags.zero_padded = 0;
// 	if (specifier == 'u')
// 		number = va_arg(args, unsigned int);
// 	else
// 		number = (long int)va_arg(args, int);
// 	if (number < 0)
// 		length = printf_negative_integer(number, flags);
// 	else
// 		length = printf_positive_integer(number, flags);
// 	return (length);
// }
