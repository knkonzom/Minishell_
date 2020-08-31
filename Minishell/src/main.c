#include "../includes/minishell.h"

// Driver program for minishell
int     main()
{
    char    input_string[MAXCOM], *parsed_args[MAXLIST];

    int     exec_flag = 0;

    init_shell();
    while (1)
    {
        if (take_input(input_string))
            continue;
        exec_flag = process_string(input_string, parsed_args);
        if (exec_flag == 1)
        {
            exec_args(parsed_args);
        }
    }
    return (0);
}