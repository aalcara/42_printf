/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/02/20 15:47:33 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long		i;
	unsigned long		j;

	i = 0;
	j = 0;
	if (*(little + i) == '\0')
		return ((char *)big);
	while (*(big + i) != '\0' && len > i)
	{
		if (*(big + i) == *(little + j))
		{
			j++;
			if (*(little + j) == '\0')
				return ((char *)(big + i - j + 1));
		}
		i++;
		if (*(little + j) != *(big + i))
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (NULL);
}
