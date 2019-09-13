#include "libft.h"
void *  ft_memalloc(size_t size)
{
	void *res;

	if (!(res = (void*)malloc(size * sizeof(void)))
			return (NULL);
	bzeros(res, size);
	return (res);
}
