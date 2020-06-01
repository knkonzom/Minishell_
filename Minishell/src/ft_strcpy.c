#include "../includes/minishell.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *ret;

	ret = dst;
	while ((*dst++ = *src++))
		;
	return (ret);
}
