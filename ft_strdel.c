#include "libft.h"
void  ft_strdel(char **as)
{
	if (!as || !*as)
		return ;
	free(*as);
}
