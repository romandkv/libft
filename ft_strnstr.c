#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len))
{
        int i;
        int j;

        i = 0;
        j = 0;
	if (!(needle[0]))
		return (haystack);
        while (haystack[i])
        {
                while (needle[i + j])
                {
                        if (haystack[i + j] != needle[i + j])
                        {
                                j = 0;
                                break;
                        }
                        if (needle[i + j + 1] == '\0')
                                return (haystack[i]);
                        j++;
                }
                i++;
        }
        return (NULL);
}

