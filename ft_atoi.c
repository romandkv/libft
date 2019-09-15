/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:54:56 by pshock            #+#    #+#             */
/*   Updated: 2019/09/15 15:04:45 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	int res;
	int op;

	i = 0;
	op = 1;
	while (nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\r' ||
			nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		op = -1;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i];
	}
	return (res * op);
}
