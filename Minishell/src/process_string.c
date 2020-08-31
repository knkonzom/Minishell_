#include "../includes/minishell.h"

int     process_string(char *str, char **parsed)
{
    int piped = 0;
    parse_space(str, parsed);
    if (own_cmd_handler(parsed))
        return 0;
    else
        return 1 + piped;
}