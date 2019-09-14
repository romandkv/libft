/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:55:53 by pshock            #+#    #+#             */
/*   Updated: 2019/09/14 20:06:09 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (dst[j])
	{
		j++;
	}
	j++;
	while (i < size)
	{
		dst[j] = src[i];
		i++;
		j++;		
	}
	dst[j] = '\0';
	return (j);
}
