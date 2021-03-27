/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:20:03 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 17:57:32 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef	struct	ft_printf_flags
{
	int			left_aligned;
	int			min_width;
	int			precision;
	int			zero_padded;
	int			true_precision;
	int			specifier;
	int			pointer;
	int			padded;
}				t_flags;

int				ft_printf(const char *str, ...);
int				select_flags(char **percent_sign, va_list args);
int				printf_char(t_flags flags, va_list args);
int				printf_str(t_flags flags, va_list args);
int				printf_percent_sign(t_flags flags);
int				printf_integer(t_flags flags, va_list args, int specifier);
int				printf_hexadecimal(t_flags flags, va_list args);
void			reset_flags(t_flags *flags);

#endif
