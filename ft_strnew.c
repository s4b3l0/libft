/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:47:17 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/18 10:36:58 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*c;

	c = ((char *)malloc(sizeof(char) * size + 1));
	if (!c)
		return (NULL);
	ft_bzero(c, size + 1);
	return (c);
}
