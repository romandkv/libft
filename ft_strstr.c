/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:57:39 by pshock            #+#    #+#             */
/*   Updated: 2019/09/15 17:13:38 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				j = 0;
				break ;
			}
			if (needle[j + 1] == '\0')
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	if (!(needle))
		return ((char*)(haystack + i));
	return (NULL);
}
