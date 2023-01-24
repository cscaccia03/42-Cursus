/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscaccia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:11:31 by cscaccia          #+#    #+#             */
/*   Updated: 2023/01/23 17:13:14 by cscaccia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	string(char a, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	len;
	int				start;
	int				end;
	char			*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && string(s1[i], set))
		i++;
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (i >= 0 && string(s1[i], set))
		i--;
	end = i;
	if ((start - end) < 0)
		len = ((start - end) * -1) + 2;
	else
		len = start - end + 2;
	str = malloc(sizeof(char) * len);
	ft_strlcpy(str, &s1[start], len);
	return (str);
}
