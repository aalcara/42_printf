/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:55:19 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 17:57:46 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		reset_flags(t_flags *flags)
{
	flags->left_aligned = 0;
	flags->min_width = 0;
	flags->precision = 0;
	flags->zero_padded = 0;
	flags->true_precision = 0;
	flags->specifier = 'x';
	flags->pointer = 0;
	flags->padded = ' ';
}
