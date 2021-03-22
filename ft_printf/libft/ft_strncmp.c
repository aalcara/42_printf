/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:00:56 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/20 20:55:34 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				calc;

	i = 0;
	while (i < n)
	{
		calc = ((*(unsigned char *)(s1 + i)) - (*(unsigned char *)(s2 + i)));
		if (calc != 0)
			return (calc);
		else if ((*(unsigned char *)(s1 + i)) == '\0')
			return (calc);
		i++;
	}
	return (0);
}
