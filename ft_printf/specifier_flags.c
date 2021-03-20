/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:30:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/19 21:21:18 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

static int		get_flag_num(char **str, int *i, va_list args)
{
	int			length;
	int			number;

	number = 0;
	// printf("\nl:18\ti = %d, str[i] = %c, str[i+1] = %c", *i, *((*str) + *i), *((*str) + *i + 1));
	if (*((*str) + *i) == '.')
		*i = *i + 1;
	if (*((*str) + *i) == '*')
	{
		return (va_arg(args, int));
	}
	else if (*((*str) + *i) >= '1' && *((*str) + *i) <= '9')
	{
		number = ft_atoi((*str) + *i);
		length = ft_strlen(ft_itoa(number));
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
}

static int		select_specifier(char specifier, t_flags flags, va_list args)
{
	if (specifier == 'c')
		return (printf_char(flags, args));
	if (specifier == 's')
		return (printf_str(flags, args));
	if (specifier == '%')
		return (printf_percent_sign(flags));
	if (specifier == 'd' || specifier == 'i')
		return (printf_integer(flags, args));
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
	while (ft_strchr("-*.0123456789", *((*str) + i)))
	{
		if (*((*str) + i) == '-')
			flags.left_aligned = 1;
		else if (*((*str) + i) == '.')
			flags.precision = get_flag_num(str, &i, args);
		else if (*((*str) + i) == '0')
			flags.zero_padded = 1;
		else if (*((*str) + i) == '*')
			flags.min_width = get_flag_num(str, &i, args);
		else if (*((*str) + i) >= '1' && *((*str) + i) <= '9')
			flags.min_width = get_flag_num(str, &i, args);
		i++;
	}
	specifier = *((*str) + i);
	lenght = select_specifier(specifier, flags, args);
	*str = ((*str) + i + 1);
	return (lenght);
}
