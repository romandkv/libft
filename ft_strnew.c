/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:10:27 by pshock            #+#    #+#             */
/*   Updated: 2019/09/15 15:17:04 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = (char*)malloc(size)))
		return (NULL);
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
