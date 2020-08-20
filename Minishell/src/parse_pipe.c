#include "../includes/minishell.h"

// Function for finding pipe.
int     parse_pipe(char *str, char **piped_str)
{
    int i;

    i = 0;
    while (i < 2)
    {
        piped_str[i] = strsep(&str, "|");
        if (piped_str[i] == NULL)
        {
            break;
        }
        i++;
    }
    
    if (piped_str[1] == NULL)
    {
        return (0); // Return 0 if no pipe is found.
    }
    else
    {
        return (1);
    }
}