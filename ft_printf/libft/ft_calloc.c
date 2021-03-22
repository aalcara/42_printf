/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:02:57 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/20 21:02:35 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	unsigned long	i;
	unsigned long	total;

	i = 0;
	total = nmemb * size;
	p = (unsigned char *)malloc(total);
	if (p == NULL)
		return (NULL);
	while (i < total)
	{
		*(p + i) = 0;
		i++;
	}
	return ((void *)p);
}
