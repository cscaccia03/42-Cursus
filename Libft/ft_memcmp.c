/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaccia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:34:18 by cscaccia          #+#    #+#             */
/*   Updated: 2023/01/17 11:36:21 by cscaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i)
			== *((unsigned char *)s2 + i))
		i++;
		else
			return ((*((unsigned char *)s1 + i))
				- *((unsigned char *)s2 + i));
	}
	return (0);
}
