/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:15:11 by pshock            #+#    #+#             */
/*   Updated: 2019/09/14 19:15:23 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_nows(const char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\n' || *s == '\t')
			i++;
		s++;
	}
	return (i);
}


char	*ft_strtrim(char const *s)
{
	char *res;
	int i;
	int len;

	i = 0;
	len = ft_strlen_nows(s);
	if (!(res = (char*)malloc(len + 1)))
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		s++;
	}
	return (NULL);
}
