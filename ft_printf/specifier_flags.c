/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 11:30:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/17 19:27:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//

static void		reset_flags(t_flags *flags)
{
	flags->left_aligned = 0;
	flags->min_width = 0;
}

int				select_specifier(char specifier, t_flags flags, va_list args)
{
	// printf("\nl:27\tEntrou funcao select_specifier");//
	if (specifier == 'c')
		return (printf_char(flags, args));
	return (0);
}

int				select_flags(char **percent_sign, va_list args)
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
	while (ft_strchr("-*.", *((*percent_sign) + i)))
	{
		if (*((*percent_sign) + i) == '-')
			flags.left_aligned = 1;
		else if (*((*percent_sign) + i) == '*')
			flags.min_width = va_arg(args, int);
		i++;
	}
	specifier = *((*percent_sign) + i);
	// printf("\nl:51\tspecifier = %c", specifier);//
	lenght = select_specifier(specifier, flags, args);
	*percent_sign = ((*percent_sign) + i + 1);
	return (lenght);
}
