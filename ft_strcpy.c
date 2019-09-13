#include "libft.h"
char	*ft_strcpy(char *dest, const char *src)
{
	int i;
	int len;

	len = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
