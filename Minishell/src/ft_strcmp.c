#include "../includes/minishell.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if ((str1[i] - str2[i]) < 0)
			{
				return (-1);
			}
			else
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}
