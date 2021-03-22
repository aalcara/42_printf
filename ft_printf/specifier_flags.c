/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:30:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/22 15:29:04 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

static int		num_length(int number)
{
	int 		num_len;

	num_len = 0;
	while (number > 0)
	{
		number = number / 10;
		num_len++;
	}
	return (num_len);
}

static int		get_precision(char **str, int *i, va_list args, t_flags *flags)
{
	int			length;
	int			number;

	*i = *i + 1;
	flags->true_precision = 1;
	if (*((*str) + *i) == '*')
		number = va_arg(args, int);
	else if (*((*str) + *i) >= '1' && *((*str) + *i) <= '9')
	{
		number = ft_atoi((*str) + *i);
		length = num_length(number);
		*i = *i + length - 1;
	}
	else
	{
		*i = *i - 1;
		number = 0;
	}
	return (number);
}

static int		get_min_width(char **str, int *i, va_list args, t_flags *flags)
{
	int			length;
	int			number;

	number = 0;
	// printf("\nl:18\ti = %d, str[i] = %c, str[i+1] = %c", *i, *((*str) + *i), *((*str) + *i + 1));
	if (*((*str) + *i) == '*')
	{
		if ((number = va_arg(args, int)) < 0)
		{
			flags->left_aligned = 1;
			return (-number);
		}
	}
	else if (*((*str) + *i) >= '1' && *((*str) + *i) <= '9')
	{
		number = ft_atoi((*str) + *i);
		length = num_length(number);
		*i = *i + length - 1;
	}
	return (number);
}

static void		reset_flags(t_flags *flags)
{
	flags->left_aligned = 0;
	flags->min_width = 0;
	flags->precision = 0;
	flags->zero_padded = 0;
	flags->true_precision = 0;
}

static int		select_specifier(char specifier, t_flags flags, va_list args)
{
	if (specifier == 'c')
		return (printf_char(flags, args));
	if (specifier == 's')
		return (printf_str(flags, args));
	if (specifier == '%')
		return (printf_percent_sign(flags));
	if (specifier == 'd' || specifier == 'i' || specifier == 'u')
		return (printf_integer(flags, args, specifier));
	if (specifier == 'x' || specifier == 'X' || specifier == 'p')
		return (printf_hexadecimal(flags, args, specifier)); //todo	               incompleta
	return (0);
}

int				select_flags(char **str, va_list args)
{
	t_flags		flags;
	char		specifier;
	int			i;
	int			lenght;

	i = 1;
	reset_flags(&flags);
	// printf("\nl:109\ti = %d\n", i);
	while (ft_strchr("-*.0123456789", *((*str) + i)))
	{
		if (*((*str) + i) == '-')
			flags.left_aligned = 1;
		else if (*((*str) + i) == '0')
			flags.zero_padded = 1;
		else if (*((*str) + i) >= '1' && *((*str) + i) <= '9')
			flags.min_width = get_min_width(str, &i, args, &flags);
		else if (*((*str) + i) == '.')
			flags.precision = get_precision(str, &i, args, &flags);
		else if (*((*str) + i) == '*')
			flags.min_width = get_min_width(str, &i, args, &flags);
		i++;
		// printf("\nl:103\tprecision = %d", flags.precision);
		// printf("\nl:104\tmin_width = %d\n", flags.min_width);
		// printf("l:107\ti = %d\n", i);
	}
	specifier = *((*str) + i);
	lenght = select_specifier(specifier, flags, args);
	*str = ((*str) + i + 1);
	return (lenght);
}
