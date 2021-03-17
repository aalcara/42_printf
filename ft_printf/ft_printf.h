/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:20:03 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/17 16:02:35 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct ft_printf_flags
{
	int			left_aligned;
	int			min_width;
} t_flags;

int			ft_printf(const char *str, ...);
int			select_flags(char **percent_sign, va_list args);

# endif
