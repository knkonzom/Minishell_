#include "../includes/minishell.h"

// Function to execute builtin commands
int     own_cmd_handler(char **parsed)
{
    int     num_of_cmds = 4, i , switch_own_arg = 0;
    char    *list_of_cmds[num_of_cmds];
    char    *username = NULL;

    username = getenv("USER");

    list_of_cmds[0] = "exit";
    list_of_cmds[1] = "cd";
    list_of_cmds[2] = "help";
    list_of_cmds[3] = "hello";

    for (i = 0; i < num_of_cmds; i++)
    {
        int	ft_strcmp(const char *s1, const char *s2);
        if (ft_strcmp(parsed[0], list_of_cmds[i]) == 0)
        {
            switch_own_arg = i + 1;
            break;
        }
    }

    switch (switch_own_arg)
    {
    case 1:
        ft_putstr("Goodbye!\n");
        exit(0);
    case 2:
        chdir(parsed[1]);
        return (1);
    case 3:
        open_help();
        return (1);
    case 4:
        ft_putstr("Username is: ");
        while (*username)
        {
            ft_putchar(*username++);      
        }
        return (1);
    default:
        break;
    }
    return (0);
}