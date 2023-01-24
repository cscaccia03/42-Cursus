/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaccia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:12:01 by cscaccia          #+#    #+#             */
/*   Updated: 2023/01/23 12:59:07 by cscaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*ptr1 && *ptr2 && *ptr1 == *ptr2 && n > 0)
	{
			ptr1++;
			ptr2++;
			n--;
	}
	if (n > 0)
		return (*ptr1 - *ptr2);
	return (0);
}
