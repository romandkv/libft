#include "libft.h"
char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int len;
	char *res;

	i = 0;
	len = ft_strlen(s);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);	
}
