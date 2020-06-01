#include "../includes/minishell.h"

// Function to take input.
int     take_input(char *str)
{
    char    *buf;

    buf = readline("\n$> ");
    if (ft_strlen(buf) != 0)
    {
        add_history(buf);
        ft_strcpy(str, buf);
        return 0;
    }
    else
    {
        return 1;
    }
}