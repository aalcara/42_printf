/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:57:48 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/22 15:43:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = dest;
	csrc = src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		while (n--)
			*cdst++ = *csrc++;
	else
	{
		csrc = csrc + (n - 1);
		cdst = cdst + (n - 1);
		while (n--)
			*cdst-- = *csrc--;
	}
	return (dest);
}
