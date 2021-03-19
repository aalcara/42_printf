/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:30:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/18 22:27:04 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

int				printf_integer(t_flags flags, va_list args)
{
	int			length;


	return (0);
}

static void		reset_flags(t_flags *flags)
{
	flags->left_aligned = 0;
	flags->min_width = 0;
	flags->precision = 0;
}

int				select_specifier(char specifier, t_flags flags, va_list args)
{
	// printf("\nl:27\tEntrou funcao select_specifier");//
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
	// printf("\nl:36\tentrou select_flags");
	//printf("\nl:37\tpercent_sign=%s", *percent_sign);
	//printf("\nl:38\tpercent_sign[1]=%c", *((*percent_sign)+1));
	t_flags		flags;
	char		specifier;
	int			i;
	int			lenght;

	i = 1;
	reset_flags(&flags);
	// printf("\nl:45\tInício while");//
	while (ft_strchr("-*.0123456789", *((*str) + i)))
	{
		if (*((*str) + i) == '-')
			flags.left_aligned = 1;
		else if (*((*str) + i) == '*')
			flags.min_width = va_arg(args, int);
		else if (*((*str) + i) >= '1' && *((*str) + i) <= '9')
			flags.min_width = ft_atoi((*str) + i);
		else if (*((*str) + i) == '.')
			flags.precision = ft_atoi((*str) + i + 1);
		printf("l:78\tprecision = %d", flags.precision);//
		i++;
	}
	specifier = *((*str) + i);
	// printf("\nl:51\tspecifier = %c", specifier);//
	lenght = select_specifier(specifier, flags, args);
	*str = ((*str) + i + 1);
	return (lenght);
}
