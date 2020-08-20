#include "../includes/minishell.h"

// Function for parsing command words.
void    parse_space(char *str, char **parsed)
{
    int i;
    
    i = 0;
    while (i < MAXLIST)
    {
        parsed[i] = strsep(&str, " ");
        if (parsed[i] == NULL)
            break;
        if (ft_strlen(parsed[i]) == 0)
        {
            i--;   
        }
        i++;
    }
}