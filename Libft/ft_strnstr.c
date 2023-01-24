/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaccia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:36 by cscaccia          #+#    #+#             */
/*   Updated: 2023/01/19 16:16:38 by cscaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	slen;

	if (*to_find == '\0')
		return ((char *)str);
	slen = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= slen)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, slen) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
