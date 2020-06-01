#include "../includes/minishell.h"

// Funciton to print current working directory.
void    print_dir()
{
    char    cwd[1024];
    char    *str;

    str = getcwd(cwd, sizeof(cwd));
}