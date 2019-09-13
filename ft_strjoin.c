#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(res = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1))
			return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
