/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 17:32:28 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/18 11:25:52 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*resstr;
	size_t		i;

	if (!s)
		return (NULL);
	if (!(resstr = ft_strnew(len)))
		return (NULL);
	i = -1;
	while (++i < len)
		resstr[i] = s[start + i];
	return (resstr);
}
