#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int res;
	int op;

	i = 0;
	op = 1;
	while (nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '+')
		i++;
	else
		if (nptr[i] == '-')
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
