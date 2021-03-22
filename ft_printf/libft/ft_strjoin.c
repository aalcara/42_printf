/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/08 16:04:15 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		len;
	char				*substr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(substr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		*(substr + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(substr + i + j) = *(s2 + j);
		j++;
	}
	*(substr + i + j) = '\0';
	return (substr);
}
