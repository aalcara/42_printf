/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:51:37 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:18:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int		i;
	char				temp;

	if (src == NULL)
		return (0);
	if (size > 0)
	{
		i = 0;
		temp = src[i];
		while (temp != '\0' && i < (size - 1))
		{
			dst[i] = temp;
			i++;
			temp = src[i];
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
