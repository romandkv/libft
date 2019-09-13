#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int	i;
	int	len;
	char	*str2;

	i = 0;
	len = ft_strlen(str);
	if (!(str2 = (char*)malloc(len++)))
	{
		return (NULL);
	}
	while (i < len - 1)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
