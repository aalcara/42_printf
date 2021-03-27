/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:30:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:49:48 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		num_length(int number)
{
	int			num_len;

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
	else if (*((*str) + *i) >= '0' && *((*str) + *i) <= '9')
	{
		number = ft_atoi((*str) + *i);
		length = num_length(number);
		if (*((*str) + *i) == '0')
			length++;
		*i = *i + length - 1;
	}
	else
	{
		*i = *i - 1;
		number = 0;
	}
	if (number >= 0)
		return (number);
	flags->true_precision = 0;
	return (0);
}

static int		get_min_width(char **str, int *i, va_list args, t_flags *flags)
{
	int			length;
	int			number;

	number = 0;
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
	if (specifier == 'x' || specifier == 'p' || specifier == 'X')
	{
		if (specifier == 'p')
		{
			flags.pointer = 1;
			flags.specifier = 'x';
		}
		if (specifier == 'X')
			flags.specifier = 'X';
		return (printf_hexadecimal(flags, args));
	}
	return (-1);
}

int				select_flags(char **str, va_list args)
{
	t_flags		flags;
	int			i;

	i = 1;
	reset_flags(&flags);
	while (ft_strchr("-*.0123456789", *((*str) + i)) && *((*str) + i) != '\0')
	{
		if (*((*str) + i) == '-')
			flags.left_aligned = 1;
		else if (*((*str) + i) == '0')
			flags.zero_padded = 1;
		else if (*((*str) + i) == '.')
			flags.precision = get_precision(str, &i, args, &flags);
		else
			flags.min_width = get_min_width(str, &i, args, &flags);
		i++;
	}
	flags.specifier = *((*str) + i);
	if (flags.specifier == '\0' || !(ft_strchr("csdiupxX%", flags.specifier)))
	{
		*str = ((*str) + i);
		return (i + 1);
	}
	*str = ((*str) + i + 1);
	return (select_specifier(flags.specifier, flags, args));
}
