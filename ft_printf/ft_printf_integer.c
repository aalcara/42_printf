/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:16:26 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/19 16:25:16 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

static char		*precision_itoa(long int number, t_flags flags)
{
	printf("\nl:18\tteste");
	char		*string;
	char		*number_str;
	int			number_length;
	int			length;

	printf("\nl:23\tflags.precision = %d", flags.precision);//
	length = 0;
	if (number < 0)
	{
		number = -number;
		string[0] = '-';
		length++;
	}
	number_length = ft_strlen(number_str = ft_itoa(number));
	while (number_length < flags.precision)
	{
		string[length] = '0';
		number_length++;
		length++;
	}
	while (number_str)
		string[length++] = *number_str++;
	return (string);
}

static char		*printf_itoa(long int number, t_flags flags)
{
	char		*str;
	long int	negative_number;

	printf("\nl:48\tEntrou printf_itoa");//
	negative_number = -number;
	if (flags.precision == 0)
	{
		if (flags.zero_padded == 1 && number < 0)
			str = ft_itoa(negative_number);
		else
			str = ft_itoa(number);
	}
	else
	printf("\nl:58\tteste abrir precision_itoa");//
	printf("\nl:59\tnumber = %ld", number);//
	printf("\nl:60\tflags.left_aligned = %d", flags.left_aligned);//
	printf("\nl:61\tflags.min_width = %d", flags.min_width);//
	printf("\nl:62\tflags.precision = %d", flags.precision);//
	printf("\nl:63\tflags.zero_padded = %d", flags.zero_padded);//
	str = precision_itoa(number, flags);
	return (str);
}

static int		printf_negative_integer(long int number, t_flags flags)
{
	char		*number_str;
	int			length;
	char 		padded;

	// printf("l:68\tEntrou printf_negative");//
	number_str = printf_itoa(number, flags);
	length = ft_strlen(number_str);
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

	printf("\nl:97\tEntrou printf_positive");//
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

	printf("\nl:121\tEntrou printf_integer");//
	number = va_arg(args, int);
	printf("\nl:123 number = %d", number);//
	if (number < 0)
		length = printf_negative_integer(number, flags);
	else
		length = printf_positive_integer(number, flags);
	return (length);
}
