/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:15:29 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/14 14:16:48 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int			i;
	size_t		lns;

	i = -1;
	lns = ft_strlen(s) + 1;
	while (++i < (int)lns)
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
	return (NULL);
}
