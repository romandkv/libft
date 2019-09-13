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

}
