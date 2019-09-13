#include "libft.h"
char	*ft_strnew(size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!(res = (char*)malloc(size)))
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
