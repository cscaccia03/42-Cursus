/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaccia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:00:40 by cscaccia          #+#    #+#             */
/*   Updated: 2023/01/16 17:14:11 by cscaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = (char *)s + ft_strlen(s);
	while (*l != (unsigned char)c)
	{
		if (l == s)
			return (NULL);
		l--;
	}
	return (l);
}
