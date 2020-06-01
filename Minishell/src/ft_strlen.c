#include "../includes/minishell.h"

size_t	ft_strlen(const char *s)
{
	const char *p;

	p = s;
	while (*s)
		++s;
	return (s - p);
}