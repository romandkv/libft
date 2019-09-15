/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshock <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:35:29 by pshock            #+#    #+#             */
/*   Updated: 2019/09/15 15:09:19 by pshock           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*number;

	number = (char *)ft_memalloc(10);
	if (n >= 0 && number)
	{
		*--number = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (number)
	{
		*--number = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--number = '0' - (n % 10);
			n /= 10;
		}
		*--number = '-';
	}
	return (number);
}
