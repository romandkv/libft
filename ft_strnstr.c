#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (!(needle[0]))
		return ((char*)haystack);
	while (i < len)
	{
		while (needle[i + j])
		{
			if (haystack[i + j] != needle[i + j])
			{
				j = 0;
				break;
			}
			if (needle[i + j + 1] == '\0')
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

