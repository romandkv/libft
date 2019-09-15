/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:44:49 by pshock            #+#    #+#             */
/*   Updated: 2019/09/15 15:19:12 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!(str = (char*)malloc(len + 1)) || len + 1 == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = ((char*)s)[i + start];
		i++;
	}
	return (str);
}
