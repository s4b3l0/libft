/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 19:13:50 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/14 10:37:03 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	int		i;
	char	*dest;
	char	*d;

	i = ft_strlen(s1) + ft_strlen(s2);
	dest = ft_strnew(i);
	if (!dest)
		return (NULL);
	d = dest;
	while (*s1)
		*(dest++) = *(s1++);
	while (*s2)
		*(dest++) = *(s2++);
	*(dest++) = '\0';
	return (d);
}
