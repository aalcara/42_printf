/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:37:47 by aalcara-          #+#    #+#             */
/*   Updated: 2021/03/27 18:17:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		s_len;
	unsigned int		real_len;
	char				*substr;

	if (!s)
		return (NULL);
	i = 0;
	real_len = len;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if ((s_len - start) < len)
		real_len = (s_len - start);
	substr = ft_calloc(real_len + 1, sizeof(char));
	if (!substr)
		return (0);
	while (*(s + start + i) != '\0' && i < len)
	{
		*(substr + i) = *(s + i + start);
		i++;
	}
	return (substr);
}
