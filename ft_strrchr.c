/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 20:37:37 by pshock            #+#    #+#             */
/*   Updated: 2019/09/14 20:50:36 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *s1;

	s1 = (char*)s;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i++;
	}
	if ((char)c == '\0')
	{
		return (s1 + i);
	}
	return (NULL);
}
