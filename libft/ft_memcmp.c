/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:00:56 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/09 17:31:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				calc;

	i = 0;
	while (i < n)
	{
		calc = ((*(unsigned char *)(s1 + i)) - (*(unsigned char *)(s2 + i)));
		if (calc != 0)
		{
			return (calc);
		}
		i++;
	}
	return (0);
}
